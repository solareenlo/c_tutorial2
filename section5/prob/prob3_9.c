#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 100 + 1;
	printf("数値：%d\n", n);
	if(n < 50) {
		printf("５０未満です\n");
	} else {
		printf("５０以上です\n");
	}
	return 0;
}
