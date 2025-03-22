from setuptools import find_packages
from setuptools import setup

setup(
    name='cooing_code_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cooing_code_interfaces', 'cooing_code_interfaces.*')),
)
