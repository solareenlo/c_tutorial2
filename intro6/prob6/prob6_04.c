#include <stdio.h>

void numjudge(int a);

int main(void){
    int a;

    printf("整数値を入力してください：");
    scanf("%d", &a);
    numjudge(a);

    return 0;
}

void numjudge(int a) {
    if(a == 0) {
        printf("0です\n");
    }else if(a % 2 == 0) {
        printf("偶数です\n");
    }else {
        printf("奇数です\n");
    } 
}
