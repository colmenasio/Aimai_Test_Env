from setuptools import find_packages
from setuptools import setup

setup(
    name='godot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('godot_interfaces', 'godot_interfaces.*')),
)
