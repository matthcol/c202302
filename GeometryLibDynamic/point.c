#include "point.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void initPoint(Point_ptr p_pt, double x, double y, char *name) {
    p_pt->x = x;
    p_pt->y = y;
    strcpy(p_pt->name,name);
}

Point_ptr newPoint(double x, double y, char *name){
    Point_ptr pt = malloc(sizeof(Point));
    initPoint(pt, x, y, name);
    return pt;
}

void point2str(char * buffer, Point_ptr p_pt){
    sprintf(buffer, "%s (%f, %f)", p_pt->name, p_pt->x, p_pt->y);
}

double distance(Point_ptr p_pt1, Point_ptr p_pt2) {
    return hypot(
        p_pt1->x - p_pt2->x,
        p_pt1->y - p_pt2->y
    );
}