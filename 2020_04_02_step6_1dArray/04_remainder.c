#include <stdio.h>

int main(){
    int count[42] = {0};

    int i, input, r;
    for(i = 0; i < 10; i++){
        scanf("%d", &input);
        r = input % 42;
        count[r] += 1;
    }

    int result = 0;
    for(i = 0; i < 42; i++){
        if(count[i] > 0){
            result += 1;
        }
    }

    printf("%d\n", result);

    return 0;
}
