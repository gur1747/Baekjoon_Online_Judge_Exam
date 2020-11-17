#include <stdio.h>

int main() {
	int score;

	scanf("%d", &score);

	if (90 <= score && score <= 100) {
		printf("A\n");

		return 0;
	}
	else if (80 <= score && score < 90) {
		printf("B\n");

		return 0;
	}
	else if (70 <= score && score < 80) {
		printf("C\n");

		return 0;
	}
	else if (60 <= score && score < 70) {
		printf("D\n");

		return 0;
	}
	else if (0 <= score && score < 60) {
		printf("F\n");

		return 0;
	}
	else {
		printf("Invalid Score.\n");

		return -1;
	}
}
