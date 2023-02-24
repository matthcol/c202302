import ctypes
import pathlib

def test_loop(c_lib, loop_count):
    res = c_lib.loop(loop_count)
    print(loop_count, "loops ; res = ", res)