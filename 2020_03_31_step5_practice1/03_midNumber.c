#include <stdio.h>

int main(){
    int num[3];

    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    int i, j, temp;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(num[j] < num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("%d\n", num[1]);
}
