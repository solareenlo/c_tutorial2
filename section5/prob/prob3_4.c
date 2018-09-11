#include <stdio.h>

int main(void) {
	int i;

	printf("任意の整数値を入力してください：");
	scanf("%d", &i);

	if(i <= 10 || i >= 90) {
		printf("１０以下か９０以上の値です\n");
	}

	return 0;
}
