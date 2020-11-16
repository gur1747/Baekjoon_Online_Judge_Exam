#include <stdio.h>

int self(int n);
int main() {
	int num[10001] = { 0, };

	int i, result;
	for (i = 1; i < 10001; i++) {
		result = self(i);

		if (result < 10001) {
			num[result]++;
		}
	}

	for (i = 1; i < 10001; i++) {
		if (num[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}

int self(int n) {
	int result = n;
	result += n / 10000;
	result += n / 1000 % 10;
	result += n / 100 % 10;
	result += n / 10 % 10;
	result += n % 10;

	return result;
}
