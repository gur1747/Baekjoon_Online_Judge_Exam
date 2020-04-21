#include <stdio.h>

int factorial(int n);

int main(){
    int n, result;
    scanf("%d", &n);

    result = factorial(n);

    printf("%d\n", result);

    return 0;
}

int factorial(int n){
    if(n > 0){
        return (n * factorial(n - 1));
    }else{
        return 1;
    }
}
