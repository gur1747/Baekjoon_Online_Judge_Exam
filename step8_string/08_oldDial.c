#include <stdio.h>
#include <string.h>

int main() {
	char dial[16];
	int cnt[26] = { 0, };
	scanf("%s", dial);

	int i;
	int time = 0;
	int temp;
	for (i = 0; i < strlen(dial); i++) {
		temp = dial[i];
		cnt[temp - 65]++;
	}

	time = 3 * (cnt[0] + cnt[1] + cnt[2]) +
		4 * (cnt[3] + cnt[4] + cnt[5]) +
		5 * (cnt[6] + cnt[7] + cnt[8]) +
		6 * (cnt[9] + cnt[10] + cnt[11]) +
		7 * (cnt[12] + cnt[13] + cnt[14]) +
		8 * (cnt[15] + cnt[16] + cnt[17] + cnt[18]) +
		9 * (cnt[19] + cnt[20] + cnt[21]) +
		10 * (cnt[22] + cnt[23] + cnt[24] + cnt[25]);

	printf("%d\n", time);

	return 0;
}
