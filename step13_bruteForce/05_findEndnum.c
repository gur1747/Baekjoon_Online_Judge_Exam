#include <stdio.h>

int findEndnum(int i);
int main() {
	int N;
	scanf("%d", &N);

	int i = 0;
	int count = 0;
	while (1) {
		i++;
		if (findEndnum(i) >= 3) {
			count++;
		}
		if (count == N) {
			break;
		}
	}

	printf("%d\n", i);

    return 0;
}


int findEndnum(int i) {
	int check = 0;
	int flag = 0;
	int temp = 0;

	while (i) {
		temp = i % 10;
		if (temp == 6) {
			if (flag == 0) {
				flag = 1;
			}
			check++;
		}
		else if (flag == 1) {
			if (check >= 3) {
				return check;
			}
			flag = 0;
			check = 0;
		}

		i /= 10;
	}

	return check;
}
