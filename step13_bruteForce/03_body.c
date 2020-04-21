#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);

    int *w = (int *)malloc(N * sizeof(int));        //몸무게
    int *h = (int *)malloc(N * sizeof(int));        //키
    int *rank = (int *)malloc(N * sizeof(int));     //등수

    int i, j;
    for(i = 0; i < N; i++){    //배열들 초기화
        w[i] = 0;
        h[i] = 0;
        rank[i] = 1;    //등수는 덩치큰 사람 수 + 1 이므로 초기값 1로 초기화
    }

    //사람들 몸무게, 키 입력받기
    for(i = 0; i < N; i++){
        scanf("%d %d", &w[i], &h[i]);
    }

    //등수 매기기
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(w[i] < w[j] && h[i] < h[j]){
                rank[i]++;
            }
        }
    }

    //결과 출력
    for(i = 0; i < N; i++){
        printf("%d ", rank[i]);
    }
    printf("\n");


    return 0;
}
