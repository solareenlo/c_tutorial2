#include <stdio.h>

void square(int, int);

int main(void) {
    int i, j;

    printf("たての個数を入力してください：");
    scanf("%d", &i);
    printf("よこの個数を入力してください：");
    scanf("%d", &j);

    square(i, j);

    return 0;
}

void square(int tate, int yoko){
    int i, j;

    for(i = 0; i < tate; i++) {
        for(j = 0; j < yoko; j++) {
            printf("■ ");
        }
        printf("\n");
    }
}
