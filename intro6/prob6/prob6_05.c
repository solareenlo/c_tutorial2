#include <stdio.h>

int max(int a, int b);

int main(void) {
    int a, b;
    int result;

    printf("1つ目の値を入力してください：");
    scanf("%d", &a);
    printf("2つ目の値を入力してください：");
    scanf("%d", &b);
    printf("\n");

    printf("%dと、%dのうち、大きい値は%dです\n", a, b, max(a, b));

    return 0;
}

int max(int a, int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}
