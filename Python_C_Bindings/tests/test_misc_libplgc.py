import ctypes
import pathlib

def test_translate(c_lib):
    x = 3
    y = 5
    res = c_lib.translate(x, y)
    print(x, "+", y, "=", res)

def test_product(c_lib):
    x = 3
    y = 5
    res = c_lib.product(ctypes.c_double(x), ctypes.c_double(y))
    print(x, "*", y, "=", res)
