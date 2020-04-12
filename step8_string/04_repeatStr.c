//실패한 문제
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);

	int i, j, k, R;
	char temp[1];
	char S[21];
	char P[21][1000];
	for (i = 0; i < T; i++) {
		scanf("%d %s", &R, S);
		//여기부터가 문제임
		for (j = 0; j < strlen(S); j++) {
			for (k = 0; k < R; k++) {
				strncpy(temp, S + j, 1);
				strcat((*(P + j) + T), temp);
			}
		}
	}

	for (i = 0; i < T; i++) {
		printf("%s\n", (*(P + j) + T));
	}

	return 0;
}
