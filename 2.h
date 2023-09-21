#include <stdio.h>
#include <math.h>

extern double cylinder_surface_area(int radius, int height){
    double pi = M_PI;
    double surface_area = 2 * pi * radius * (radius + height);
    return surface_area;
}