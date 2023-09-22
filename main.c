#include <stdio.h>
// connect files
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "7.h"
#include "8.h"
#include "9.h"
#include "10.h"
#include "11.h"
#include "12.h"
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

    // The third task

    int minutes;
    printf("Enter the minutes:");
    scanf("%d", &minutes);
    // assigned to our array the selected cells from the function
    int* result = minutes_and_hours(minutes);
    printf("Hours: %d\n", result[0]);
    printf("Minutes: %d\n", result[1]);

    // The fourth task
    printf("Enter the pounds:");
    int pounds;
    scanf("%d", &pounds);
    res = pounds_and_kilograms(pounds);
    printf("Kilograms: %f\n", res);

    // The fifth task

    printf("Enter the versts:");
    int versts;
    scanf("%d", &versts);
    res = versts_and_kilometers(versts);
    printf("Kilometers: %f\n", res);

    // sixth task
    int tension, resistance;
    printf("Enter the tension:");
    scanf("%d", &tension);
    printf("Enter the resistance:");
    scanf("%d", &resistance);
    res = current_strength(tension, resistance);
    printf("Current strenght: %f\n", res);

    // The seventh task

    // create "int res" because the variable "res" with type "double" has already been declared,
    // but in this task we can use "int".
    int res_int;
    int gram_100_price;
    printf("Enter the price:");
    scanf("%d", &gram_100_price);
    res_int = kg_price(gram_100_price);
    printf("Kilogram price: %d\n", res_int);

    // The eighth task

    int resistance_1, resistance_2;
    printf("Resistance 1:");
    scanf("%d", &resistance_1);
    printf("Resistance 2:");
    scanf("%d", &resistance_2);
    res = total_resistance(resistance_1, resistance_2);
    printf("Total resistance: %f\n", res);

    // The ninth task

    int a,b;
    printf("Enter the sides of the rectangle:\n");
    scanf("%d" "%d", &a, &b);
    res_int = rectangle_area(a,b);
    printf("Rectangle area: %d\n", res_int);

    // The tenth task

    int weight, price;
    printf("Enter the weight:");
    scanf("%d", &weight);
    printf("Enter the price:");
    scanf("%d", &price);
    res_int = apple_price(weight, price);
    printf("Apple price: %d\n", res_int);

    // The eleventh task

    int distance, gasoline_consumption, gasoline_price;
    printf("Distance:");
    scanf("%d", &distance);
    printf("Gasoline consumption:");
    scanf("%d", &gasoline_consumption);
    printf("Gasoline price:");
    scanf("%d", &gasoline_price);
    res = rest_on_cottage(distance, gasoline_consumption, gasoline_price);
    printf("Total price: %f\n", res);

    // The twelfth task

    // Since the variable "height" was declared in the previous task,
    // we do not declare it.
    int length, width;
    printf("Lenght:");
    scanf("%d", &length);
    printf("Height:");
    scanf("%d", &height);
    printf("Width:");
    scanf("%d", &width);
    res_int = parallelepiped_volume(length, height, width);
    printf("Parallelepiped volume: %d", res_int);
    return 0;
}
