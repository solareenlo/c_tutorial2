#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	int num;
	int max = 0;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();

	for(i=0; i<5; i++) {
		num = rand() % 100 + 1;
		printf("%d\n", num);
		if(max < num) {
			max = num;
		}
	}

	printf("最大値：%d\n", max);

	return 0;
}
