import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/delewlew/ros2_tutorial_workspace_2/install/python_package_that_uses_parameters_and_launch_files'
