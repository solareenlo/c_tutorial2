#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int i, j;
    int box[3][3];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            box[i][j] = rand() % 10;
            printf("%d ", box[i][j]);
        }
        printf("\n");
    }

    return 0;
}
