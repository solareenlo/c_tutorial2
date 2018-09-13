#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main(void) {
    int i, j;

    printf("1つ目の整数を入力してください：");
    scanf("%d", &i);
    printf("2つ目の整数を入力してください：");
    scanf("%d", &j);

    printf("2つの整数の最小公倍数は、%dです\n", lcm(i, j));
    printf("2つの整数の最大公約数は、%dです\n", gcd(i, j));

    return 0;
}

int lcm(int a, int b) {
    return (a * b / gcd(a, b));
}

// ユークリッドの互除法を用いて最大公約数を求める
int gcd(int a, int b) {
    int i;
    int amari;

    if(a == b) {
        return a;
    }

    if(a < b) {
        i = a;
        a = b;
        b = i;
    }

    amari = a % b;
    while(amari != 0) {
        a = b;
        b = amari;
        amari = a % b;
    }

    return b;
}
