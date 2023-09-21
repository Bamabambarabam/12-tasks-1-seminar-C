#include <stdio.h>
#include <math.h>
// we use the sqrt from the math library
extern double triangle_area(double a, double b, double c){
    double p = (a + b + c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
