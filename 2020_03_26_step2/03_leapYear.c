#include <stdio.h>

int main(){
    int year;

    scanf("%d", &year);

    if(1 <= year && year <= 4000){
        if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
            printf("1\n");

            return 0;
        }else{
            printf("0\n");

            return 0;
        }
    }else{
        printf("Insert Year /'In range/'(1 ~ 4000)\n");
        return -1;
    }
}
