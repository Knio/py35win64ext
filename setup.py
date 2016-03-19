from setuptools import setup, Extension

setup(
    name='helloworld_py35win64ext',
    version=1.0,

    # Describes how to build the actual extension module from C source files.
    ext_modules = [
        Extension(
            # Python name of the module
            'helloworld_py35win64ext',

            # Source files to build
            ['src/helloworld.c'],
        )
    ]
)
