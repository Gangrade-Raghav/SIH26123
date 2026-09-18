from setuptools import find_packages
from setuptools import setup

setup(
    name='amr_fleet_msgs',
    version='0.1.0',
    packages=find_packages(
        include=('amr_fleet_msgs', 'amr_fleet_msgs.*')),
)
