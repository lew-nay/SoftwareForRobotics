from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'ada_lovelace_description'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Include config files
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.*yaml*'))),
        # Include launch files
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        # Include URDF (.urdf) files
        (os.path.join('share', package_name, 'urdf'), glob(os.path.join('urdf', '*.urdf*'))),
        # Include the pure .xacro file
        #(os.path.join('share', package_name, 'urdf'), glob(os.path.join('urdf', '*.xacro*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='delewlew',
    maintainer_email='delewlew@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
