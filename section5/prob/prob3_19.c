#include <stdio.h>

int main(void) {
	int i;

	printf("閏年かを判定したい西暦を入力してください：");
	scanf("%d", &i);

	if(i%400 == 0) {
		printf("閏年です\n");
	} else if(i%100 == 0) {
		printf("閏年ではありません\n");
	} else if(i%4 == 0) {
		printf("閏年です\n");
	} else {
		printf("閏年ではありません\n");
	}

	return 0;
}
