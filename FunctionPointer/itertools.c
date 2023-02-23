#include "itertools.h"

double *map(double (*f)(double), double *src, double *dest, size_t count){
    for (size_t i=0; i<count; ++i){
        dest[i] = (*f)(src[i]); // or f(src[i]);
    }
    return dest;
}