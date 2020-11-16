#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    scanf("%d", &n);

    int *score = (int *)malloc((n + 1) * sizeof(int));
    double *score_corrupt = (double *)malloc((n + 1) * sizeof(double));

    int i;
    int max = -1;
    for(i = 0; i < n; i++){
        scanf("%d", &score[i]);
        if(score[i] > max){
            max = score[i];
        }
    }

    double sum_corrupt = 0.0;
    double avg_corrupt = 0.0;
    for(i = 0; i < n; i++){
        score_corrupt[i] = (double)score[i] / (double)max * 100;
        sum_corrupt += score_corrupt[i];
    }
    avg_corrupt = sum_corrupt / (double)n;

    printf("%.2lf\n", avg_corrupt);

    return 0;
}
