#include <stdio.h>

int main(void) {
	int i, num;

	printf("回数を入力：");
	scanf("%d", &num);

	printf("whileで実行\n");
	i = 1;
	while (i <= num) {
		printf("*");
		i++;
	}
	printf("\n");

	printf("do~whileで実行\n");
	i = 1;
	do {
		printf("*");
		i++;
	} while (i <= num);
	printf("\n");

	return 0;
}
