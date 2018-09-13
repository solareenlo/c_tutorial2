#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int i, j;
    int max = 0, min = 9;
    int box[3][3];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            box[i][j] = rand() % 10;
            printf("%d ", box[i][j]);
            if(box[i][j] > max) {
                max = box[i][j];
            }
            if(box[i][j] < min) {
                min = box[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);

    return 0;
}
