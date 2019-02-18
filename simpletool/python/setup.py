#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2019 Ryan Mackenzie White <ryan.white4@canada.ca>
#
# Distributed under terms of the  license.

"""

"""
from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

ext_modules = [
        Extension('simpleclass', ['simpleclass.pyx'],
            language="c++",
            libraries=['simpleclass'],
            library_dirs=['/home/rwhite/Projects/simpletool/simpletool/build'])]
setup(
    name = 'SimpleTool extension',
    cmdclass = {'build_ext': build_ext},
    ext_modules = ext_modules
        )
