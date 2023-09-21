#include <stdio.h>

extern int kg_price(int gram_100_price){
    int res = 10 * gram_100_price;
    return res;
}
