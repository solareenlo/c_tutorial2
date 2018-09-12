#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	int num;

	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();

	num = rand() % 10 + 1;
	printf("%d\n", num);
	if(num%2 == 0 ) {
		for(i=0; i<num; i++) {
			printf("★");
		}
		printf("\n");
	} else {
		for(i=0; i<num; i++) {
			printf("☆");
		}
		printf("\n");
	}

	return 0;
}
