#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, big = 0, small = 0;
    int data[10];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 10; i++) {
        data[i] = rand() % 100 + 1;
        printf("%d ", data[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++) {
        if(data[i] >= 50) {
            big += 1;
        }
        if(data[i] < 50) {
            small += 1;
        }
    }

    printf("50以上の数：%d\n", big);
    printf("50未満の数：%d\n", small);

    return 0;
}
