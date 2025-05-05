//wap to print the following pattern

#include <stdio.h>
int main(){
    int i, j;
    char str[11] ="PROGRAMMING";
    for (i = 0 ; i < 11; i++){
        for (j = 0; j <=i; j++){
            printf("%c\t", str[j]);
        }
        printf("\n");
    }
    return 0;
}