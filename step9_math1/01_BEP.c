//실패한 문제 추후 수정
#include <stdio.h>

int main(){
    unsigned int A, B, C, P;
    scanf("%d %d %d", &A, &B, &C);

    if(B >= C){
        printf("-1\n");
        return 0;
    }

	unsigned int left;
	unsigned int right;
    P = 1;
    while(1){
        left = A + (B * P);
        right = C * P;

        if(right > left){
            break;
        }else{
            P++;
        }
    }
    printf("%d\n", P);

    return 0;
}
