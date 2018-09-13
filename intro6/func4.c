#include <stdio.h>

int global = 100;

void func1(double, int);
void func2();

int main(void) {
    double a = 123.456;
    int b = 100;
    global = 50;

    printf("main処理中\n");
    printf("global = %d\n", global);
    printf("a = %f b = %d\n", a, b);
    printf("**********\n");

    func1(3.3, 4);
    func2();

    return 0;
}

void func1(double a, int b) {
    printf("func1処理中\n");
    printf("global = %d\n", global);
    printf("a = %f b = %d\n", a, b);
    printf("**********\n");
}

void func2() {
    double a = -4.4;
    int b = 3;

    printf("func2処理中\n");
    printf("global = %d\n", global);
    printf("a = %f b = %d\n", a, b);
    printf("**********\n");
}
