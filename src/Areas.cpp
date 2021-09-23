#include "Areas.h"
#include <math.h>

double rectangle(double width, double length)
{
    return width * length;
}

double circle(double radius)
{
    return M_PI * radius * radius;
}

double rt_triangle(double base, double height)
{
    return 0.5 * base * height;
}