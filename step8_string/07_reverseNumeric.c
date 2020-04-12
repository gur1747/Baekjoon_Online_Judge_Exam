#include <stdio.h>

int reverse(int a);
int findSuper(int a, int b);
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    a = reverse(a);
    b = reverse(b);

    if(findSuper(a, b) == 0){
        printf("%d\n", a);

        return 0;
    }else{
        printf("%d\n", b);

        return 0;
    }
}

int reverse(int a){
    int res;
    int hund = a / 100;
    int ten = (a / 10) % 10;
    int one = a % 10;

    res = (one * 100) + (ten * 10) + (hund * 1);

    return res;
}

int findSuper(int a, int b){
    if(a > b){
        return 0;
    }else{
        return 1;
    }
}
