#include <stdio.h>

int discHansoo(int i);

int main() {
	int n;
	scanf("%d", &n);

	int i;
	int count = 0;
	for (i = 1; i <= n; i++) {
		if (discHansoo(i) == 0) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}

int discHansoo(int i) {
	int a, b, c;

	a = i / 100 % 10;	//100의자리
	b = i / 10 % 10;	//10의자리
	c = i % 10;			//1의자리

	//한수인 경우 0반환, 아닌경우 1반환
	if (i < 10) {
		return 0;
	}
	else if (i < 100) {
		return 0;
	}
	else if (i < 1000) {
		if (a - b == b - c) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {
		return 1;
	}
}
