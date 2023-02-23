#ifndef _ITER_TOOLS
#define _ITER_TOOLS

#include <stdlib.h>

double *map(double (*f)(double), double *src, double *dest, size_t count);

#endif // !_ITER_TOOLS