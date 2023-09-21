#include <stdio.h>

extern double pounds_and_kilograms(int pounds){
    double kg = pounds * 405.9;
    return kg/1000;
}