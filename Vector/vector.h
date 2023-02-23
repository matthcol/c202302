#ifndef _VECTOR
#define _VECTOR

#include <stdlib.h>

#define _CAPACITY_DELTA 10

typedef struct {
    size_t _size;
    size_t _capacity;
    double *_data; 
} Vector, *Vector_ptr;

typedef double* VectorIterator;

void vectorInit(Vector_ptr p_vector, size_t capacity);
Vector_ptr vectorNew(size_t capacity);
void vectorDestroy(Vector_ptr p_vector);
void vectorDestroyAndFree(Vector_ptr *p_p_vector);

VectorIterator vectorBegin(Vector_ptr p_vector);
VectorIterator vectorEnd(Vector_ptr p_vector);

size_t vectorSize(Vector_ptr p_vector);

double vectorAt(Vector_ptr p_vector, size_t index);
void vectorAppend(Vector_ptr p_vector, double value);
void vectorExtend(Vector_ptr p_vectorDest, Vector_ptr p_vectorSrc);
size_t vectorFind(Vector_ptr p_vector, double value);
VectorIterator vectorFindIt(VectorIterator first, VectorIterator last, double value);

#endif // !_VECTOR#define _VECTOR


