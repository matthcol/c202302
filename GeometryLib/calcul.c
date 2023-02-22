#include "point.h"

double distance(Point_ptr p_pt1, Point_ptr p_pt2) {
    return hypot(
        p_pt1->x - p_pt2->x,
        p_pt1->y - p_pt2->y
    );
}