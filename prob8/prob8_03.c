// 階乗を求めるプログラム
#include <stdio.h>

int main(void) {
    int num, i, p;

    printf("任意の正の整数を入力してください：");
    scanf("%d", &num);

    p = 1;
    for(i = num; i > 0; i--) {
        p *= i;
        printf("%d", i);
        if(i != 1) {
            printf("×");
        }
    }
    printf("=%d\n", p);

    return 0;
}
