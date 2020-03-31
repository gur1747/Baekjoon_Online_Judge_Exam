#include <stdio.h>

int main(){
    int a, b;
    int sum[1024];

    int i = 0;
    while(1){
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0){
            break;
        }
        sum[i] = a + b;
        i++;
    }
    int t = i;

    i = 0;
    while(i < t){
        printf("%d\n", sum[i]);
        i++;
    }

    return 0;
}
