from setuptools import find_packages
from setuptools import setup

setup(
    name='rosbridge_server',
    version='1.3.2',
    packages=find_packages(
        include=('rosbridge_server', 'rosbridge_server.*')),
)
