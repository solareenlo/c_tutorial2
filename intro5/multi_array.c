#include <stdio.h>

int main(void) {
    int a[3][4];
    int m, n;

    for(m = 0; m < 3; m++) {
        for(n = 0; n < 4; n++) {
            a[m][n] = m + n;
        }
    }

    for(m = 0; m < 3; m++) {
        for(n = 0; n < 4; n++) {
           printf("%d ", a[m][n]);
        }
        printf("\n");
    }

    return 0;
}
