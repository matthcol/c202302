def loop(n: int) -> float:
    res = 2.0
    for _ in range(n):
        x = res + 3
        y = x * 1.000001
        res = y - 3
    return res