#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i<=5; i++){
        for (j = 1; j <= 5; j++){
            if (i == j){
                printf("0\t");
            } else {
                printf("%d\t", i);
            }
        }
        printf("\n");
    }
    return 0;
    
}