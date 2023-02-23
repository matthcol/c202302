#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double sum(int count,...){
    double result = 0.0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        result += va_arg(args, double);
    }
 
    va_end(args);
    return result;
}

int main() {
    double d = sum(3, 1.0, 2.5, 3.4);
    printf("Sum=%f\n", d);
    return 0;
}

