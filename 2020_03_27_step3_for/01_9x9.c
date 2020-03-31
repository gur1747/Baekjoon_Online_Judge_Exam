#include <stdio.h>

int main(){
    int dan;

    scanf("%d", &dan);

    if(dan < 1 || dan > 9){
        printf("구구단은 1에서 9단까지!\n");

        return -1;
    }else{
        int i;
        for(i = 1; i <= 9; i++){
            printf("%d * %d = %d\n", dan, i, dan * i);
        }

        return 0;
    }
}
