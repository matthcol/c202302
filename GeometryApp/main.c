#include <stdio.h>
#include <stdlib.h>

#include "point.h"


int main () {
    Point ptA;
    Point_ptr p_ptA = &ptA; 
    initPoint(p_ptA, 5.5, 7.25, "A");
    Point_ptr p_ptB = newPoint(2.5, 11.25, "B");
    char buffer[256];

    point2str(buffer, p_ptA);
    printf("%s\n", buffer);
    point2str(buffer, p_ptB);
    printf("%s\n", buffer);
    
    double d = distance(p_ptA, p_ptB);
    printf("distance [AB]: %f\n", distance);

    free(p_ptB);
}