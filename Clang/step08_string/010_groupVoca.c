#include <stdio.h>
#include <string.h>

int main() {
	int N;
	scanf("%d", &N);

	char str[101];
	int i, j, k, temp;
	int count = 0;
	int flag[26] = { 0, };
	for (i = 0; i < N; i++) {
		scanf("%s", str);
		for (j = 0; j < strlen(str); j++) {
			temp = str[j];
			if (flag[temp - 97] != 0) {    //이미 나온 알파벳인 경우
				if (str[j - 1] == str[j]) {
					continue;
				}
				else {
					break;
				}
			}
			else {                       //나온적 없는 알파벳인 경우
				flag[temp - 97]++;
			}
		}

		if (j >= strlen(str)) {
			count++;
		}

		for (k = 0; k < 26; k++) {		//flag 초기화
			flag[k] = 0;
		}
	}

	printf("%d\n", count);

	return 0;
}
