#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	i = rand() % 100 + 1;
	printf("数値：%d\n", i);
	if((i%2) == 0 && (i%3) == 0) {
		printf("２と３の公倍数です\n");
	} else if((i%3) == 0) {
		printf("３の倍数です\n");
	} else if((i%2) == 0) {
		printf("２の倍数です\n");
	}
	return 0;
}
