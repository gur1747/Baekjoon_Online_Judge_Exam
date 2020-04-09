#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);

	char *arr = (char *)malloc(n * sizeof(char));
	scanf("%s", arr);

	int sum = 0;
	int i;
	char *temp = (char *)malloc(8 * sizeof(char));
	for (i = 0; i < n; i++) {
		strncpy(temp, arr + i, sizeof(char));
		sum += atoi(temp);
	}
	printf("%d\n", sum);

	return 0;
}
