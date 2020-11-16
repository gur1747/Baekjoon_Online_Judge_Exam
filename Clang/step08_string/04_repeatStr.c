#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);

	int i, j, k, R, length;
	char S[21];

	for (i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", S);

		length = strlen(S);
		for (j = 0; j < length; j++) {
			for (k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
