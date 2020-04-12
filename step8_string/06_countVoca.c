#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0;
	char dict[1000000];
	while (scanf("%s", dict) != EOF) {
		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}
