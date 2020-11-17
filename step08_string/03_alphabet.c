#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char voca[101];
    scanf("%s", voca);

    int n = strlen(voca);
    int i, j;
    int ascii;
    int result[26];
    for(i = 0; i < 26; i++){
        result[i] = -1;
    }
    for(j = 0, ascii = 97; j < 26, ascii < 123; j++, ascii++){
        for(i = 0; i < n; i++){
            if(voca[i] == ascii){
                if(result[j] == -1){
                    result[j] = i;
                }
            }
        }
    }

    for(i = 0; i < 26; i++){
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
