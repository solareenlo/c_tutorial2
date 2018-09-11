#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	i = rand() % 100 + 1;
	printf("数値：%d\n", i);
	if((i%2) == 0 && i <= 50) {
		printf("５０以下の偶数です\n");
	} else if((i%2) == 0) {
		printf("偶数です\n");
	} else if(i <= 50) {
		printf("５０以下です\n");
	}
	return 0;
}
