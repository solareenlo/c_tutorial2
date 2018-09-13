#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "randLib.h"

void init_rand() {
    srand((unsigned)time(NULL));
    rand(); rand(); rand(); rand(); rand();
}

int getRand(int start, int end) {
    return rand() % (end - start + 1) + start;
}
