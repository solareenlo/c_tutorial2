#include <stdio.h>
#include "calc.h"

int main(void) {
    double d1, d2, d3;
    double a = 1.2, b = 3.4, c = 5.6;

    d1 = ave(a, b);
    d2 = ave(4.1, 5.4);
    d3 = ave(c, 9.3);

    printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);

    return 0;
}
