#include <stdio.h>

int main(void) {
	int i, j;

	for(i=1; i<11; i++) {
		for(j=0; j<10; j++) {
			if(i > j) {
				printf("■ ");
			} else {
				printf("□ ");
			}
		}
		printf("\n");
	}

	return 0;
}
