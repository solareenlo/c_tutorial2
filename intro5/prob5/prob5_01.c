#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int i;
    int a[7];

    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();

    for(i=0; i<6; i++) {
        a[i] = rand() % 10 + 1;
        printf("a[%d]=%d ", i, a[i]);
    }
    printf("\n");

    return 0;
}
