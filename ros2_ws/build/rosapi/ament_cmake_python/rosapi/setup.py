from setuptools import find_packages
from setuptools import setup

setup(
    name='rosapi',
    version='1.3.2',
    packages=find_packages(
        include=('rosapi', 'rosapi.*')),
)
