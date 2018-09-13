#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, big = 0, small = 0, zero = 0;
    int data[5];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 5; i++) {
        data[i] = rand() % 21 - 10;
        printf("%d ", data[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++) {
        if(data[i] > 0) {
            big += 1;
        }
        if(data[i] < 0) {
            small += 1;
        }
        if(data[i] == 0) {
            zero += 1;
        }
    }

    printf("0より大きい数：%d\n", big);
    printf("0より小さい数：%d\n", small);
    printf("0の数：%d\n", zero);

    return 0;
}
