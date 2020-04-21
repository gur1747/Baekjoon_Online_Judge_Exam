#include <stdio.h>
char star[2190][2190];    //패턴이 저장 될 2차원배열(전역변수로 선언)

void makeStar(int n, int x, int y);    //패턴을 저장하는 함수

int main() {
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			star[i][j] = ' ';    //전부 공백으로 초기화
		}
	}

	makeStar(n, 0, 0);//최초 호출

	//출력부
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c", star[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void makeStar(int n, int x, int y) {
	if (n == 3) {
		star[x][y] = '*';
		star[x + 1][y] = '*';
		star[x + 2][y] = '*';
		star[x][y + 1] = '*';
		star[x + 1][y + 1] = ' ';
		star[x + 2][y + 1] = '*';
		star[x][y + 2] = '*';
		star[x + 1][y + 2] = '*';
		star[x + 2][y + 2] = '*';
	}
	else {
		makeStar(n / 3, x, y);
		makeStar(n / 3, x + n / 3, y);
		makeStar(n / 3, x + n / 3 * 2, y);
		makeStar(n / 3, x, y + n / 3);
		//makeStar(n/3, x + n/3, y + n/3); 공백으로 비울 가운데 부분(공통사항)
		makeStar(n / 3, x + n / 3 * 2, y + n / 3);
		makeStar(n / 3, x, y + n / 3 * 2);
		makeStar(n / 3, x + n / 3, y + n / 3 * 2);
		makeStar(n / 3, x + n / 3 * 2, y + n / 3 * 2);
	}

}
