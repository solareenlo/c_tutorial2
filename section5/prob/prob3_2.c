#include <stdio.h>

int main(void) {
	int i;

	printf("任意の整数を入力してください：");
	scanf("%d", &i);

	if(i != 1) {
		printf("１ではありません\n");
	}

	return 0;
}
