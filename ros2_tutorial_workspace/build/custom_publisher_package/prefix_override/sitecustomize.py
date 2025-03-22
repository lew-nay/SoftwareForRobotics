import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/delewlew/ros2_tutorial_workspace/install/custom_publisher_package'
