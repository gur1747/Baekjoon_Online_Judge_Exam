#include <stdio.h>

int main(){
    int a, b;
    int result[1024];

    int i = 0;

    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);

        result[i] = a + b;
        i++;
    }
    int j;
    for(j = 0; j < i; j++){
        printf("%d\n", result[j]);
    }

    return 0;
}
