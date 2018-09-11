#include <stdio.h>

int main(void) {
	float i, j;

	printf("長方形の幅の長さ（単位:mm）：");
	scanf("%f", &i);
	printf("長方形の縦の長さ（単位:mm）：");
	scanf("%f", &j);
	printf("長方形の面積は、%fmm^2です。\n", i*j);

	return 0;
}
