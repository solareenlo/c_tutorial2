#include <stdio.h>
double ave(double l, double m) {
    double r = (l + m) / 2;
    return r;
}

int main(void) {
    double d1, d2, d3;
    double a = 1.2, b =3.4, c = 5.6;

    d1 = ave(a, b);
    d2 = ave(4.1, 5.7);
    d3 = ave(c, 2.8);

    printf("d1 = %.2f, d2 = %.2f, d3 = %.2f\n", d1, d2, d3);

    return 0;
}
