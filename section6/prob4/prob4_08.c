#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();

	while(1) {
		i = rand() % 10 + 1;
		printf("%d\n", i);
		if(i == 10) {
			break;
		}
	}
	printf("終了します\n");

	return 0;
}
