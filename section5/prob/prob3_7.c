#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	printf("数値：%d\n", n);
	if(n >= 5) {
		printf("５以上です\n");
	} else {
		printf("５未満です\n");
	}
	return 0;
}
