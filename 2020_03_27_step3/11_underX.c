#include <stdio.h>

int main(){
    int n, x;
    int a[16384]; //포인터 사용하여 가변크기 배열 사용이 메모리 활용면에서 좋을것 같음

    scanf("%d %d", &n, &x);

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        if(a[i] < x){
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
