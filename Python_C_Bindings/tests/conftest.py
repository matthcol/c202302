import ctypes
import pathlib
import pytest

# import lib dynamic C
libname = pathlib.Path().absolute() / "libplg.so"
# libname = "libplg.so" # if installed

# print(libname)
_c_lib = ctypes.CDLL(libname)

# register return types
_c_lib.product.restype = ctypes.c_double
_c_lib.loop.restype = ctypes.c_double

@pytest.fixture
def c_lib():
    return _c_lib

@pytest.fixture
def loop_count():
    return 1000000000