#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(void) {
    int a, b;
    int result;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
    result = sub(a, b);
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}
