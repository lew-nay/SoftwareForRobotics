import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node, SetParameter
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    ld = LaunchDescription()

    lifecycle_nodes = ['example_map_server', 'amcl']
    node_lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        output='screen',
        parameters=[{'node_names':lifecycle_nodes, 'autostart': True}] # add other parameters here if required
    )

    save_map = Node(
        package='nav2_map_server',
        executable='map_saver_server',
        output='screen',
        parameters=[
            {'save_map_timeout': 2.0},
            {'free_thresh_default': 0.25},
            {'occupied_thresh_default': 0.65},
        ]
    )

    # Add actions to LaunchDescription

    ld.add_action(node_lifecycle_manager)
    ld.add_action(save_map)

    return ld