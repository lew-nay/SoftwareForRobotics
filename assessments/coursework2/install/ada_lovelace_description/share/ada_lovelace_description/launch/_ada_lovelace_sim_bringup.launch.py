import os
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable
from launch_ros.actions import Node, SetParameter
from launch.launch_description_sources import PythonLaunchDescriptionSource
import xacro


def generate_launch_description():

    ld = LaunchDescription()

    pkg_name = "ada_lovelace_description"
    file_subpath = "urdf/ada_lovelace.xacro.urdf"

       # Set ignition resource path (to be able to render meshes)
    resource_paths = [os.path.join(get_package_prefix(pkg_name), 'share')]

    # Add any existing declared resources
    if 'IGN_GAZEBO_RESOURCE_PATH' in os.environ:
        resource_paths.insert(0, os.environ['IGN_GAZEBO_RESOURCE_PATH'])

    # Concatenate a path seperator (':') between all paths and update the environment variable
    ign_resource_path_update = SetEnvironmentVariable(name='IGN_GAZEBO_RESOURCE_PATH',value=[os.pathsep.join(resource_paths)])
    
    # Use xacro to process the URDF file
    xacro_file = os.path.join(get_package_share_directory(pkg_name),file_subpath)
    robot_description_raw = xacro.process_file(xacro_file).toxml()

    # # Include the Gazebo launch file
    # launch_gazebo = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource([get_package_share_directory('ros_gz_sim'), '/launch', '/gz_sim.launch.py']),
    #     launch_arguments={
    #         'gz_args' : '-r empty.sdf'
    #     }.items(),
    # )

    coursework_support_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([get_package_share_directory('coursework_support'), '/launch','/sim_bringup.launch.py'])
    )

    config_file = os.path.join(get_package_share_directory(pkg_name),'config', 'twist_mux.yaml')
    node_twist_mux = Node(
        package='twist_mux',
        executable='twist_mux',
        name='node_twist_mux',
        output='screen',
        parameters=[{
            'yaml_cfg_file': config_file
        }],
        remappings=[('cmd_vel_out', 'carol_greider/cmd_vel')]
    )

    # robot state publisher node
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_raw}] # add other parameters here if required
    )

    node_joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        output='screen',
        parameters=[{'use_gui': False}]
    )

    # Launch SLAM
    launch_slam_toolbox = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('slam_toolbox'), 'launch'),
         '/online_async_launch.py'])
    )


    # Run the spawner node from the gazebo_ros package. The entity name doesn't really matter if you only have a single robot.
    node_spawn_entity = Node(package='ros_gz_sim', executable='create',
                        arguments=['-topic', '/robot_description',
                                   '-z', '0.5'],
                        output='screen')
    
    # Bridge between Gazebo and ROS2 topics
    # https://github.com/gazebosim/ros_gz/tree/humble/ros_gz_bridge
    node_ros_gz_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock' + '@rosgraph_msgs/msg/Clock' + '[' + 'ignition.msgs.Clock',
            '/model/ada_lovelace/odometry' + '@nav_msgs/msg/Odometry'     + '[' + 'ignition.msgs.Odometry',
            '/model/ada_lovelace/cmd_vel' + '@geometry_msgs/msg/Twist'   + '@' + 'ignition.msgs.Twist',
            '/model/ada_lovelace/scan'     + '@sensor_msgs/msg/LaserScan' + '[' + 'ignition.msgs.LaserScan',
            '/model/ada_lovelace/tf'       + '@tf2_msgs/msg/TFMessage'    + '[' + 'ignition.msgs.Pose_V',
            '/model/ada_lovelace/imu'      + '@sensor_msgs/msg/Imu'       + '[' + 'ignition.msgs.IMU',
            '/model/ada_lovelace/joint_state' + '@sensor_msgs/msg/JointState' + '[' + 'ignition.msgs.Model',
            '/model/ada_lovelace/depth' + '@sensor_msgs/msg/Image' + '[' + 'ignition.msgs.Image',],
        parameters= [{'qos_overrides./diff_drive_example.subscriber.reliability': 'reliable'}],
        remappings=[
            ('/model/ada_lovelace/odometry', '/odom_raw'),
            ('/model/ada_lovelace/cmd_vel', '/ada_lovelace/cmd_vel'),
            ('/model/ada_lovelace/scan', '/scan'),
            ('/model/ada_lovelace/imu', '/imu_raw'),
            ('/model/ada_lovelace/depth', '/depth'),
            ('/model/ada_lovelace/joint_state', 'joint_states')
        ],
        output='screen'
    )


    ld.add_action(SetParameter(name='use_sim_time', value=True))
    ld.add_action(ign_resource_path_update)
    #ld.add_action(launch_gazebo)
    ld.add_action(launch_slam_toolbox)
    ld.add_action(coursework_support_launch)
    ld.add_action(node_twist_mux)
    ld.add_action(node_robot_state_publisher)
    ld.add_action(node_joint_state_publisher)
    ld.add_action(node_spawn_entity)
    ld.add_action(node_ros_gz_bridge)
    