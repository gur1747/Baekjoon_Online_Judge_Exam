#include <stdio.h>

int main(){
    int max = 0;
    int maxIndex = -1;
    int i, input;

    for(i = 1; i <= 9; i++){
        scanf("%d", &input);
        if(input > max){
            max = input;
            maxIndex = i;
        }
    }

    printf("%d\n%d\n", max, maxIndex);

    return 0;
}
