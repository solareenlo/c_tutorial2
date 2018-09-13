#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, j;
    int data[5];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        data[i] = rand() % 10 + 1;
        printf("%d ", data[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < data[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
