#ifndef _POINT
#define _POINT

typedef struct _Point {
    double x;
    double y;
    //char *name;
    char name[10];
} Point, *Point_ptr;

void initPoint(Point_ptr p_pt, double x, double y, char *name);

Point_ptr newPoint(double x, double y, char *name);

void point2str(char * buffer, Point_ptr p_pt);

double distance(Point_ptr p_pt1, Point_ptr p_pt2);

#endif // !_POINT