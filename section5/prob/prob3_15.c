#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	int i;
	srand((unsigned)time(NULL));
	rand(); rand(); rand(); rand(); rand();
	i = rand() % 100 + 1;
	printf("点数：%d\n", i);
	if(i >= 80) {
		printf("優\n");
	} else if(i >= 70) {
		printf("良\n");
	} else if(i >= 60) {
		printf("可\n");
	} else {
		printf("不可\n");
	}
	return 0;
}
