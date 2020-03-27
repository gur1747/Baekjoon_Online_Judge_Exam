#include <stdio.h>

int main() {
	int a, b;
	int r3, r4, r5, r6;

	scanf("%d %d", &a, &b);

	r3 = a*(b % 10);
	r4 = a*(((b % 100) - (b % 10))/10);
	r5 = a*(b / 100);
	r6 = r3 + r4 * 10 + r5 * 100;


	printf("%d\n", r3);
	printf("%d\n", r4);
	printf("%d\n", r5);
	printf("%d\n", r6);


	return 0;
}
