#include <stdio.h>
// define the type "double" since we don't need to get integer division
extern double current_strength(double tension, double resistance){
    double current_strengt = tension/resistance;
    return current_strengt;
}
