#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j;	//지수부
	int T;		//test case
	scanf("%d", &T);

	//각 테스트 케이스의 점수를 저장 할 배열 동적할당
	int *score = (int *)malloc(T * sizeof(int));
	for (i = 0; i < T; i++) {
		score[i] = 0;
	}


	int partScore = 0;	//각 테스트 케이스에서 문자 판별을 통한 부분점수(0,1,2,3,4...)
	char input[81];

	//테스트 케이스를 입력받고 점수를 계산하는 부분
	for (i = 0; i < T; i++) {
		scanf("%s", input);
		for (j = 0; j < strlen(input); j++) {
			if (input[j] == 'O') {
				partScore++;
				score[i] += partScore;
			}
			else {
				partScore = 0;
			}
		}
		partScore = 0;
	}


	//점수출력
	for (i = 0; i < T; i++) {
		printf("%d\n", score[i]);
	}

	return 0;
}
