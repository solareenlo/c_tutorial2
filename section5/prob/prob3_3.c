#include <stdio.h>

int main(void) {
	int i;

	printf("任意の整数値を入力してください：");
	scanf("%d", &i);

	if(i < 50) {
		printf("５０未満です\n");
	}

	return 0;
}
