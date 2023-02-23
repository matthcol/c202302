#include <stdio.h>

#include "vector.h"

void playWithVector(Vector_ptr p_vector){
    printf("\n---------------\n--- PLAY ---\n");
    vectorAppend(p_vector, 3.25);
    vectorAppend(p_vector, 4.5);
    vectorAppend(p_vector, 5.75);
    vectorAppend(p_vector, 6.625);
    vectorAppend(p_vector, 7.125);

    for (int j=0; j < 30; ++j) {
        vectorAppend(p_vector, 55.5 + j);
    }

    for (size_t i=0; i < vectorSize(p_vector); ++i) {
        double d = vectorAt(p_vector, i);
        printf("- [%u] = %f\n", i, d);
    }
}

void displayVector(Vector_ptr p_vector){
    VectorIterator first = vectorBegin(p_vector);
    VectorIterator last = vectorEnd(p_vector);
    printf("[ ");
    while (first != last) {
        printf("%f ", *first);
        ++first;
    }
    printf("]\n");
}


int main() {
    // vector in the stack
    Vector vector;
    vectorInit(&vector, 10);

    // vector in the heap
    Vector_ptr p_vector = vectorNew(20);

    // do something with data
    playWithVector(&vector);
    playWithVector(p_vector);
    
    displayVector(p_vector);

    // free data
    vectorDestroy(&vector);
    
    // vectorDestroy(p_vector);
    // free(p_vector);
    vectorDestroyAndFree(&p_vector);

    // wrong usage after free
    // playWithVector(p_vector);

}