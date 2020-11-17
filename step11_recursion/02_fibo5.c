#include <stdio.h>

int fibo(int n);

int main(){
    int n, result;
    scanf("%d", &n);

    result = fibo(n);
    printf("%d\n", result);

    return 0;
}

int fibo(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return n + fibo(n - 1);
    }else{
        return fibo(n - 2) + fibo(n - 1);
    }

}
