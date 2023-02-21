#ifndef _ARRAYS
#define _ARRAYS

#include <stdlib.h>
#include <math.h>

/**
 * @brief find a double value in a array of doubles
 * 
 * @param first pointer to 1st value to explore
 * @param last pointer just after last value to explore
 * @param size size of array tab
 * @param v value to find
 * @param epsilon precision comparison
 * @return double* pointer to element found in tab,
 * NULL if not found
 */
double *find(double *first, double *last, double v, double epsilon);

#endif // !_ARRAYS

