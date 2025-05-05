
#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 3; i++){
        for (j = 3; j > 0; j--){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}