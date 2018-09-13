#include <stdio.h>

double circumference(double);

double area(double);

int main(void) {
    double r;

    printf("半径の値を入力してください：");
    scanf("%lf", &r);
    printf("円周は%.2lfです\n", circumference(r));
    printf("円の面積は%.2lfです\n", area(r));

    return 0;
}

double circumference(double r) {
    return 2.0 * r * 3.14;
}

double area(double r) {
    return r * r * 3.14;
}
