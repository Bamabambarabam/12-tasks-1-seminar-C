#include <stdio.h>

extern int* minutes_and_hours(int minutes){
    // allocated 2 memory locations for the values
    static int result[2];
    result[0] = minutes / 60;
    result[1] = minutes % 60;
    return result;
}
