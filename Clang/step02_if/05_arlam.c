#include <stdio.h>

int main(){
    int h, m;
    int newh, newm;

    scanf("%d %d", &h, &m);

    if((0 <= h && h <= 23) && (0 <= m && m <= 59)){
        if(h == 0){
            if(m < 45){
                newh = 23;
                newm = 60 - 45 + m;//newm = m+15;
            }else{
                newh = h;
                newm = m - 45;
            }
        }else{
            if(m < 45){
                newh = h - 1;
                newm = 60 - 45 + m;
            }else{
                newh = h;
                newm = m - 45;
            }
        }
    }else{
        printf("Wrong range\n");

        return -1;
    }

    printf("%d %d", newh, newm);

    return 0;
}
