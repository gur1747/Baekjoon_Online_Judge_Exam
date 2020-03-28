#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int a[1024];
	int b[1024];

	int i;
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	for (i = 0; i < t; i++) {
		printf("%d\n", a[i] + b[i]);
	}

	return 0;
}
