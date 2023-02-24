import plgpy

def test_loop(loop_count):
    res = plgpy.loop(loop_count)
    print(loop_count, "loops ; res = ", res)