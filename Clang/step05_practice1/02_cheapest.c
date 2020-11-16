#include <stdio.h>
#define B 3
#define D 2

int main() {
	int burger[B];
	int drink[D];
	int cheap_set;

	int i, j, temp;
	for (i = 0; i < B; i++) {
		scanf("%d", &burger[i]);
	}
	for (i = 0; i < D; i++) {
		scanf("%d", &drink[i]);
	}


	for (i = 0; i < B; i++) {
		for (j = 0; j < B - 1; j++) {
			if (burger[j] > burger[j + 1]) {
				temp = burger[j];
				burger[j] = burger[j + 1];
				burger[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < D; i++) {
		for (j = 0; j < D - 1; j++) {
			if (drink[j] > drink[j + 1]) {
				temp = drink[j];
				drink[j] = drink[j + 1];
				drink[j + 1] = temp;
			}
		}
	}

	cheap_set = burger[0] + drink[0] - 50;

	printf("%d\n", cheap_set);

	return 0;
}
