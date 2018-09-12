#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int i, max = 0, min = 10;
    int data[10];

    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++) {
        data[i] = rand() % 10 + 1;
        printf("%d ", data[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++) {
        if(data[i] > max) {
            max = data[i];
        }
        if(data[i] < min) {
            min = data[i];
        }
    }
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);

    return 0;
}
