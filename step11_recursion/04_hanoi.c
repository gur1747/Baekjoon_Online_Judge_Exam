#include <stdio.h>

void Hanoi(int a, int b, int c, int n);

int main() {
	int n;
	scanf("%d", &n);

    int count = 1;
    int i;
    for(i = 0; i < n; i++){
        count = count * 2;
    }
    count--;
    printf("%d\n", count);
	Hanoi(1, 2, 3, n);

	return 0;
}

void Hanoi(int a, int b, int c, int n) {
	if (n == 1) {
		printf("%d %d\n", a, c);
	}
	else {
		//b와 c자리를 바꿔 재귀
		Hanoi(a, c, b, n - 1);
		printf("%d %d\n", a, c);
		//a와 b자리를 바꿔 재귀
		Hanoi(b, a, c, n - 1);
	}
}
