#include <stdio.h>

void stars(int n);

int main(void) {
    int n, i;
    printf("表示する回数を入力してください：");
    scanf("%d", &n);

    stars(n);

    return 0;
}

void stars(int n) {
    int i;

    if(n > 0) {
        for(i = 0; i < n; i++) {
            printf("★ ");
        }
        printf("\n");
    }else {
        printf("0より大きい値を入力してください\n");
    }
}
