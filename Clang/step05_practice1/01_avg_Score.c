#include <stdio.h>
#define N 5

int main(){
    int score[N];
    int total = 0;
    int avg;

    int i;
    for(i = 0; i < N; i++){
        scanf("%d", &score[i]);
        if(score[i] < 40){
            score[i] = 40;
        }
        total += score[i];
    }

    avg = total / N;

    printf("%d\n", avg);

    return 0;
}
