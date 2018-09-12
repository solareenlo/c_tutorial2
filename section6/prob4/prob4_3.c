#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i, num;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	num = rand() % 10 + 1;
	printf("数：%d\n", num);

	i = 0;
	do {
		printf("■");
		i++;
	} while(i < num);

	printf("\n");

	return 0;
}
