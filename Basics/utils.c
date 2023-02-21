#include "utils.h"

void swap(double *p_x,double *p_y) {
    double tmp;
    tmp = *p_x;
    *p_x = *p_y;
    *p_y = tmp;
}

