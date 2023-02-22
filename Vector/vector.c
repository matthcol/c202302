#include "vector.h"
#include "limits.h"

void vectorInit(Vector_ptr p_vector, size_t capacity) {
    p_vector->_size = 0;
    p_vector->_capacity = capacity;
    p_vector->_data = malloc(sizeof(double) * capacity);
    // TODO: if malloc fails
}

Vector_ptr vectorNew(size_t capacity) {
    Vector_ptr p_vector = malloc(sizeof(Vector));
    vectorInit(p_vector, capacity);
    return p_vector;
}

VectorIterator vectorBegin(Vector_ptr p_vector) {
    return p_vector->_data;
}

VectorIterator vectorEnd(Vector_ptr p_vector) {
    return p_vector->_data + p_vector->_size;
}

size_t vectorSize(Vector_ptr p_vector) {
    return p_vector->_size;
}

double vectorAt(Vector_ptr p_vector, size_t index) {
    return p_vector->_data[index];
}

void vectorAppend(Vector_ptr p_vector, double value) {
    if (p_vector->_size == p_vector->_capacity) {
        size_t newCapacity = p_vector->_capacity + _CAPACITY_DELTA;
        p_vector->_data = realloc(
            p_vector->_data, 
            newCapacity * sizeof(double)
        ); 
        // TODO: if realloc fail
        p_vector->_capacity = newCapacity;
    } 
    ++p_vector->_size;
    p_vector->_data[p_vector->_size] = value;
}

void vectorExtend(Vector_ptr p_vectorDest, Vector_ptr p_vectorSrc) {
    // TODO
}

size_t vectorFind(Vector_ptr p_vector, double value) {
    // TODO
    return 0;
}

VectorIterator vectorFindIt(VectorIterator first, VectorIterator last, double value) {
    // TODO
    return NULL;
}
