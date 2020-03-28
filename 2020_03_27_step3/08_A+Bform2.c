#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int a, b;

	int i;
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}

	return 0;
}
