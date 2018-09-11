#include <stdio.h>

int main(void) {
	int i;

	printf("任意の整数の値を入力してください：");
	scanf("%d", &i);

	if(i >= 5) {
		printf("５以上です\n");
	}

	return 0;
}
