#include<stdio.h>

int main(void) {
	int dice;

	printf("１から６の数値を入力してください。：");
	scanf("%d", &dice);

	if(1 <= dice && dice <= 6) {
		if(dice == 2 || dice == 4 || dice == 6) {
			printf("偶数です。\n");
		}
		else {
			printf("奇数です。\n");
		}
	}
	else {
		printf("範囲外の数値です。\n");
	}

	return 0;
}
