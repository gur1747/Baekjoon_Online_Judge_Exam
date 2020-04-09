#include <stdio.h>

int main() {
	int n;
	int lines;
	int length;
	int i, j;

	scanf("%d", &n);

	if (n < 0 || n > 100) {
		printf("Wrong range. (1 <= n <= 100)\n");

		return -1;
	}
	else if (n == 1) {
		printf("*\n");

		return 0;
	}
	else if (n % 2 == 0) {
		lines = n * 2;
		length = n;

		//repeat line
		for (i = 1; i <= lines; i++) {
			//print line
			if (i % 2 == 1) {
				for (j = 1; j < length; j++) {
					if (j % 2 == 1) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
			}
			else {
				for (j = 1; j <= length; j++) {
					if (j % 2 == 0) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
	else {
		lines = n * 2;
		length = n;

		//repeat line
		for (i = 1; i <= lines; i++) {
			//print line
			if (i % 2 == 1) {
				for (j = 1; j <= length; j++) {
					if (j % 2 == 1) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
			}
			else {
				for (j = 1; j < length; j++) {
					if (j % 2 == 0) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}

	return 0;
}
