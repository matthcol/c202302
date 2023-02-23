#include <stdio.h>
#include <stdlib.h>

#include "point.h"


int main () {
    Point ptA;
    Point_ptr p_ptA = &ptA; 
    initPoint(p_ptA, 5.6, 7.89, "A");
    Point_ptr p_ptB = newPoint(2.2, 3.3, "B");
    char buffer[256];

    point2str(buffer, p_ptA);
    printf("%s\n", buffer);
    point2str(buffer, p_ptB);
    printf("%s\n", buffer);
    
    free(p_ptB);
}