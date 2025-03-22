from setuptools import find_packages, setup

package_name = 'python_package_that_uses_the_library'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'node_that_uses_the_library = python_package_that_uses_the_library.node_that_uses_the_library:main'
        ],
    },
)
