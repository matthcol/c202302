#include <stdio.h>

#include "vector.h"

int main() {
    Vector vector;
    vectorInit(&vector, 10);

    vectorAppend(&vector, 3.25);
    vectorAppend(&vector, 4.5);
    vectorAppend(&vector, 5.75);
    vectorAppend(&vector, 6.625);
    vectorAppend(&vector, 7.125);

    for (int j=0; j < 30; ++j) {
        vectorAppend(&vector, 55.5 + j);
    }

    for (size_t i=0; i < vectorSize(&vector); ++i) {
        double d = vectorAt(&vector, i);
        printf("- [%u] = %f\n", i, d);
    }

}