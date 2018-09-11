#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	printf("a, b：%d, %d\n", a, b);
	if(a > b) {
		printf("aの方が大きいです\n");
	} else if(a < b) {
		printf("bの方が大きいです\n");
	} else {
		printf("aとbは等しいです\n");
	}
	return 0;
}
