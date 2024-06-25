from setuptools import find_packages, setup

package_name = 'robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'RPi.GPIO', 'serial', 'numpy', 'matplotlib', 'cv2',
                      'cv_bridge'],
    zip_safe=True,
    maintainer='su1jun',
    maintainer_email='su1jun@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'switch = robot.switch_node:main',
            'bluetooth = robot.bluetooth_node:main',
            'motor_btl = robot.motor_btl_node:main',
            'motor = robot.motor_node:main',
            'odom = robot.odom_node:main',
            'map = robot.map_node:main',
        ],
    },
)
