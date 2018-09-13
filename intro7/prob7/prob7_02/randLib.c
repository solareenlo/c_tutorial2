#include <stdio.h>
#include "randLib.h"

int main(void) {
    int i, num;

    init_rand();

    for(i = 0; i < 100; i++) {
        num = getRand(-10, 10);
        printf("乱数%d：%d\n", i, num);
    }

    return 0;
}
