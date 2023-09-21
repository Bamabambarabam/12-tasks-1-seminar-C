#include <stdio.h>
#include "1.h"
#include "2.h"

int main() {
    // The first task
    int radius, height;
    double res;
    printf("Enter the radius:");
    scanf("%d", &radius);
    printf("Enter the height:");
    scanf("%d", &height);
    res = cylinder_volume(radius, height);
    printf("Cylinder volume : %f\n", res);

    // The second task

    printf("Enter the radius:");
    scanf("%d", &radius);
    printf("Enter the height:");
    scanf("%d", &height);
    res = cylinder_surface_area(radius, height);
    printf("Cylinder surface area: %f\n", res);

    return 0;
}
