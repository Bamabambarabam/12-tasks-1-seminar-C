#include <stdio.h>
#include <math.h>
// I use "extern" to define the function in the main file, and initialize the function. I use
// an M_PI from math.h library.

// P.S Yes, I could write all the functions in the main file and not create 12 more files,
// but I was curious to know how functions from other files in "C" are connected.

extern double cylinder_volume(int radius, int height){
    double pi = M_PI;
    double S = pi * radius*radius;
    double V = S * height;
    return V;
}