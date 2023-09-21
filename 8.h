#include <stdio.h>

extern double total_resistance(double resistance_1, double resistance_2){
    double total_resistance = (resistance_1 * resistance_2) / (resistance_1 + resistance_2);
    return total_resistance;
}