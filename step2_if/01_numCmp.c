#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b){
        printf(">\n");

        return 0;
    }else if(a < b){
        printf("<\n");

        return 0;
    }else {
        printf("==\n");

        return 0;
    }

    return -1;
}
