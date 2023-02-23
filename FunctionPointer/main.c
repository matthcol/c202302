#include <stdio.h>
#include <math.h>

#include "itertools.h"

void printDoubleArray(size_t size, double *array){
    printf("[ ");
    for (size_t i=0; i<size; ++i) {
        printf("%f ", array[i]);
    }
    printf("]\n");
}

double redresser(double x){
    return 2*x + 1;
}

int main() {
    double tab[] = {1.0, -25.0, 9.0, 64.0};
    double res[8];
    map(
        redresser,
        map(
            &sqrt,
            map(&fabs, tab, res, 4),
            res,
            4
        ),
        res+4,
        4
    );
    
    printDoubleArray(4, tab);
    printDoubleArray(8, res);
}