#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	int num;
	int min = 100;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();

	for(i=0; i<5; i++) {
		num = rand() % 100 + 1;
		printf("%d\n", num);
		if(min > num) {
			min = num;
		}
	}

	printf("最小値：%d\n", min);

	return 0;
}
