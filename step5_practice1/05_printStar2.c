#include <stdio.h>

int main() {
	int n;
	int star, space;
	int i, j, p, q;

	scanf("%d", &n);

	star = 2 * n - 1;
	space = n - 1;
	for (i = star, p = 0; i > 1, p < space; i -= 2, p++) {
		//print space
		for (q = 0; q < p; q++) {
			printf(" ");
		}
		//print star
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");//line feed
	}

	for (; i <= star, p >= 0; i += 2, p--) {
		//print space
		for (q = 0; q < p; q++) {
			printf(" ");
		}
		//print star
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");//line feed
	}

	return 0;
}
