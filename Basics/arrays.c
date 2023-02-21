#include "arrays.h"

double *find(double *first, double *last, double v, double epsilon){
    for (; first != last; ++first) {
        if (fabs(*first - v) <= epsilon) {
            return first;
        }
    }
    return NULL;
}