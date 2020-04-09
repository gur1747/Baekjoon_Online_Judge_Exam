//실패한 문제, 추후 수정예정
#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d", &T);

    int i, j;
    int stu;
    int count = 0;
    int sum = 0;
    double avg = 0.0;
    double *result = (double *)malloc(T * sizeof(double));
    for(i = 0; i < T; i++){
        scanf("%d", &stu);
        int *score = (int *)malloc(stu * sizeof(int));
        for(j = 0; j < stu; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (double)sum / (double)stu;
        for(j = 0; j < stu; j++){
            if(score[j] >= avg){
                count += 1;
            }
        }
        result[i] = (double)count / (double)stu;

        sum = 0;
        avg = 0;
        count = 0;
        free(score);
    }

    for(i = 0; i < T; i++){
        printf("%.3lf\n", result[i]);
    }

    free(result);

    return 0;
}
