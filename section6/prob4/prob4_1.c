#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i, num;

	srand((unsigned)time(NULL));
	num = rand() % 10 + 1;
	printf("数：%d\n", num);

	for(i=0; i<num; i++) {
		printf("■");
	}
	printf("\n");

	return 0;
}
