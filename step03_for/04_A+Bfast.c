#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int a, b;

	int i;
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
	}

	return 0;
}
