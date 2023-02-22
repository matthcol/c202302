#include "point.h"

#include <stdlib.h>
#include <stdio.h>

void initPoint(Point_ptr p_pt, double x, double y, char *name) {
    p_pt->x = x;
    p_pt->y = y;
    p_pt->name = name;
}

Point_ptr newPoint(double x, double y, char *name){
    Point_ptr pt = malloc(sizeof(Point));
    initPoint(pt, x, y, name);
    return pt;
}

void point2str(char * buffer, Point_ptr p_pt){
    sprintf(buffer, "%s (%f, %f)", p_pt->name, p_pt->x, p_pt->y);
}