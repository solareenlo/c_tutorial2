#include <stdio.h>

int main(void) {
	int i;

	for(i=0; i<100; i++) {
		if(i%10 == 0) {
			printf("\n");
		}
		printf("%d ", i+1);
	}
	printf("\n");

	return 0;
}
