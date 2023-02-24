# include "plg.h"

int translate(int a, int b) {
    return a + b;
}

double product(double a, double b) {
    return a * b;
}

double loop(uint64_t n) {
    double res = 2.0;
    double x;
    double y;
    for (uint64_t i=0; i<n; ++i) {
        x = res + 3;
        y = x * 1.000001;
        res = y - 3;
    }
    return res;
}