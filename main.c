#include <stdio.h>
#include "1.h"

int main() {
    int a,b, res;
    scanf("%d %d", &a, &b);
    res = first(a, b);
    printf("%d", res);
    return 0;
}
