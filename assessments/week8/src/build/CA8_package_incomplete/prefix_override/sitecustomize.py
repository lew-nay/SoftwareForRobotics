import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/delewlew/assessments/week8/src/install/CA8_package_incomplete'
