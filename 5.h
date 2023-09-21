#include <stdio.h>

extern double versts_and_kilometers(int versts){
    double km = versts * 1066.8;
    return km/1000;
}
