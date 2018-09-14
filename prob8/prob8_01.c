#include <stdio.h>

int main(void) {
    int a, b, c;

    for(c = 1; c < 101; c++) {
        for(b = 1; b < 101; b++) {
            for(a = c-b+1; a < 101; a++) {
                if((a*a + b*b) == c*c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
