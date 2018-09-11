#include <stdio.h>

int main(void) {
	int i;

	printf("任意の整数値を入力してください：");
	scanf("%d", &i);

	if(i >= 20 && i < 80) {
		printf("２０以上８０未満です\n");
	}

	return 0;
}
