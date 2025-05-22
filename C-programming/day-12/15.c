#include <stdio.h>
int main(){
    int i, j;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    for (i = 1; i<=4; i++){
        printf("*\n");
    }
    return 0;
}