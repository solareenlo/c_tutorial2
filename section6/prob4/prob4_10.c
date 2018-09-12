#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();

	for(i=0; i<5; i++) {
		printf("%d\n", rand() % 100 + 1);
	}

	return 0;
}
