import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/delewlew/assessments/coursework1/install/cooing_code_controller'
