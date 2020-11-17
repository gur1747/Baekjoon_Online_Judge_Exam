#include <stdio.h>
#include <stdlib.h>

int main() {
	char temp;
	int cnt[26] = {0, };
	while (scanf("%c", &temp) != EOF) {
		if (temp == 65 || temp == 97) {
			cnt[0]++;
			continue;
		}
		else if (temp == 66 || temp == 98) {
			cnt[1]++;
			continue;
		}
		else if (temp == 67 || temp == 99) {
			cnt[2]++;
			continue;
		}
		else if (temp == 68 || temp == 100) {
			cnt[3]++;
			continue;
		}
		else if (temp == 69 || temp == 101) {
			cnt[4]++;
			continue;
		}
		else if (temp == 70 || temp == 102) {
			cnt[5]++;
			continue;
		}
		else if (temp == 71 || temp == 103) {
			cnt[6]++;
			continue;
		}
		else if (temp == 72 || temp == 104) {
			cnt[7]++;
			continue;
		}
		else if (temp == 73 || temp == 105) {
			cnt[8]++;
			continue;
		}
		else if (temp == 74 || temp == 106) {
			cnt[9]++;
			continue;
		}
		else if (temp == 75 || temp == 107) {
			cnt[10]++;
			continue;
		}
		else if (temp == 76 || temp == 108) {
			cnt[11]++;
			continue;
		}
		else if (temp == 77 || temp == 109) {
			cnt[12]++;
			continue;
		}
		else if (temp == 78 || temp == 110) {
			cnt[13]++;
			continue;
		}
		else if (temp == 79 || temp == 111) {
			cnt[14]++;
			continue;
		}
		else if (temp == 80 || temp == 112) {
			cnt[15]++;
			continue;
		}
		else if (temp == 81 || temp == 113) {
			cnt[16]++;
			continue;
		}
		else if (temp == 82 || temp == 114) {
			cnt[17]++;
			continue;
		}
		else if (temp == 83 || temp == 115) {
			cnt[18]++;
			continue;
		}
		else if (temp == 84 || temp == 116) {
			cnt[19]++;
			continue;
		}
		else if (temp == 85 || temp == 117) {
			cnt[20]++;
			continue;
		}
		else if (temp == 86 || temp == 118) {
			cnt[21]++;
			continue;
		}
		else if (temp == 87 || temp == 119) {
			cnt[22]++;
			continue;
		}
		else if (temp == 88 || temp == 120) {
			cnt[23]++;
			continue;
		}
		else if (temp == 89 || temp == 121) {
			cnt[24]++;
			continue;
		}
		else if (temp == 90 || temp == 122) {
			cnt[25]++;
			continue;
		}
		else {
			continue;
		}
	}

	int max = -1;
	int maxindex = -1;
	int i;
	for (i = 0; i < 26; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			maxindex = i;
		}
	}
	for (i = 0; i < 26; i++) {
		if (cnt[i] == max) {
            if(i == maxindex){
                continue;
            }else{
                printf("?\n");

                return 0;
            }
		}
	}

	printf("%c\n", maxindex + 65);

	return 0;
}
