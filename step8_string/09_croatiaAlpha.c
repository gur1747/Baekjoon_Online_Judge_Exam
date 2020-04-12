#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    scanf("%s", input);

    int i = 0;
    int count = 0;
    while(i < strlen(input)){

        if(input[i] == 'c'){
            if(input[i + 1] == '-' || input[i + 1] == '='){
                count++;
                i += 2;
            }

            else{
                count++;
                i++;
            }
        }

        else if(input[i] == 'd'){
            if(input[i + 1] == '-'){
                count++;
                i += 2;
            }

            else if(input[i + 1] == 'z'){
                if(input[i + 2] == '='){
                    count++;
                    i += 3;
                }

                else{
                    count++;
                    i++;
                    continue;
                }
            }

            else{
                count++;
                i++;
                continue;
            }
        }

        else if(input[i] == 'l'){
            if(input[i + 1] == 'j'){
                count++;
                i += 2;
            }

            else{
                count++;
                i++;
                continue;
            }
        }

        else if(input[i] == 'n'){
            if(input[i + 1] == 'j'){
                count++;
                i += 2;
            }

            else{
                count++;
                i++;
                continue;
            }
        }

        else if(input[i] == 's'){
            if(input[i + 1] == '='){
                count++;
                i += 2;
            }

            else{
                count++;
                i++;
                continue;
            }
        }

        else if(input[i] == 'z'){
            if(input[i + 1] == '='){
                count++;
                i += 2;
            }

            else{
                count++;
                i++;
                continue;
            }
        }

        else{
            count++;
            i++;
        }
    }

    printf("%d\n", count);

    return 0;
}
