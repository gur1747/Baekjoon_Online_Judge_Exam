#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int tempSum;
	int temp;
	int m;
	for (m = 1; m < n; m++) {
		tempSum = m;
		temp = m;
		while (temp) {
			tempSum += temp % 10;
			temp = temp / 10;
		}
		if (tempSum == n) {

			break;
		}
	}

	if (tempSum != n) {
		m = 0;
	}

	printf("%d\n", m);

    return 0;
}
