#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int min = 1000000;
    int max = -1000000;

    int i, input;
    for(i = 1; i <= n; i++){
        scanf("%d", &input);
        if(input >= max){
            max = input;
        }
        if(input <= min){
            min = input;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}
