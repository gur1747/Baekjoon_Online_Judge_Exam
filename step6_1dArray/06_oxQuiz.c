//실패한 문제 추후 수정예정
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
	char **input;		//테스트 케이스가 저장 될 2차원 배열
						//테스트 케이스 2차원 배열 동적할당
	input = (char **)malloc(T * sizeof(char*));
	for (i = 0; i < T; i++) {
		*(input + i) = (char *)malloc(81 * sizeof(char));
	}

	char *temp = (char *)malloc(sizeof(char));		//버퍼
	//테스트 케이스를 입력받고 점수를 계산하는 부분
	for (i = 0; i < T; i++) {
		scanf("%s", *(input + i));	//첫번째 부터 T번째 테스트 케이스 입력받는거임
		printf("%s\n", *(input + i));	//테스트 케이스 입력은 똑디 드간다
		//각 테스트 케이스에 대한 점수판별 및 점수기록하는 부분(안쪽포문 과정)
		for (j = 0; j < strlen((*(input + i))); j++) {
			strncpy(temp, ((*(input + i) + (j*sizeof(char)))), sizeof(char));	//이부분 char 단위로 나눠서 temp에 복사하는 과정에서 temp에 쓰레기값 같이드감
			printf("%s\n", temp);
			if ((strcmp(temp, "O")) == 0) {		//위에서 쓰레기값 드가는거 때문에 비교 똑바로 안되서 스코어 계산이 안됨
				partScore += 1;
				score[i] += partScore;
			}
			else {
				partScore = 0;
			}
		}
	}

	//점수출력
	for (i = 0; i < T; i++) {
		printf("%d\n", score[i]);
	}

	free(score);

	return 0;
}
