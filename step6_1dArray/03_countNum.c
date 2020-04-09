#include <stdio.h>

int main(){
    int a, b, c, result;
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    result = a * b * c;

    //세 수의 곱의 결과에서 오른쪽 끝 숫자부터 count
    int q, r;//q는 몫, r은 나머지
    while(1){
        r = result % 10;
        count[r] += 1;
        q = result / 10;
        if(q < 10){
            count[q] += 1;
            break;
        }else{
            result = q;
        }
    }

    int i;
    for(i = 0; i < 10; i++){
        printf("%d\n", count[i]);
    }

    return 0;
}
