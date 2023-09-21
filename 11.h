#include <stdio.h>

extern double rest_on_cottage(double distance, double gasoline_consumption,double gasoline_price){
    return (((distance*2)/100) * gasoline_consumption) * gasoline_price;
}
