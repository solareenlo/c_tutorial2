#include <stdio.h>

int get_absolute(int);

int main(void) {
    int n;

    printf("数値を入力してください：");
    scanf("%d", &n);

    printf("%d\n", get_absolute(n));

    return 0;
}

int get_absolute(int n) {
    if(n >= 0) {
        return n;
    }else {
        return n * -1;
    }
}
