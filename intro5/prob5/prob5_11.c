#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, big = 0, small = 0;
    int data[5];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        data[i] = rand() % 100 + 1;
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("0以上60未満：");
    for(i = 0; i < 5; i++) {
        if(data[i] >= 0 && data[i] < 60) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");

    printf("60以上80未満：");
    for(i = 0; i < 5; i++) {
        if(data[i] >= 60 && data[i] < 80) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");

    printf("80以上：");
    for(i = 0; i < 5; i++) {
        if(data[i] >= 80) {
            printf("%d ", data[i]);
        }
    }
    printf("\n");

    return 0;
}
