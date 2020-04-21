#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int *card = (int *)malloc(n * sizeof(int));
    int i;

    for(i = 0; i < n; i++){
        scanf("%d", &card[i]);
    }

    int result = 0;
    int minGap = 99999999;
    int tempSum, tempGap;

    int j, k;
    for(i = 0; i < n - 2; i++){
        for(j = i + 1; j < n - 1; j++){
            for(k = j + 1; k < n; k++){
                tempSum = card[i] + card[j] + card[k];
                if(tempSum == m){
                    minGap = 0;
                    result = tempSum;
                    break;
                }

                else if(tempSum < m){
                    tempGap = m - tempSum;
                    if(tempGap < minGap){
                        minGap = tempGap;
                        result = tempSum;
                    }
                }
            }
        }
    }

    printf("%d\n", result);

    return 0;
}
