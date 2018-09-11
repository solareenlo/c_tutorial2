#include <stdio.h>

int main(void) {
	int a, b;

	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %f\n", (float)a/b);
	printf("a %% b = %d\n", a%b);

	return 0;
}
