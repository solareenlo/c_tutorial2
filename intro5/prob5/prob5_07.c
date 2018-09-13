#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, sum;
    double ave;
    int data[5];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        data[i] = rand() % 10 +1;
        printf("%d ", data[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        sum += data[i];
    }
    printf("合計ち：%d\n", sum);

    ave = sum / 5.0;
    printf("平均値：%.2lf\n", ave);

    printf("平均値より大きい数：");
    for(i = 0; i < 5; i++) {
        if(ave < data[i]) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");

    printf("平均値より小さい数：");
    for(i = 0; i < 5; i++) {
        if(ave > data[i]) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");

    return 0;
}
