#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	i = rand() % 46 - 10;
	printf("摂氏%d度\n", i);
	if(i >= 30) {
		printf("真夏日です\n");
	} else if(i < 30 && i >= 25) {
		printf("夏日です\n");
	} else if(i < 0) {
		printf("真冬日です\n");
	}
	return 0;
}
