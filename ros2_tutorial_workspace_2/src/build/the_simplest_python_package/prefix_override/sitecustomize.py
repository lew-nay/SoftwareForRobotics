import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/delewlew/ros2_tutorial_workspace_2/src/install/the_simplest_python_package'
