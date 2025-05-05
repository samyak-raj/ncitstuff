//find the output of following program

#include <stdio.h>

int main(){
    int i, j, k, c;
    i = 0, j = 1;
    for (k = 0; k < 5; k++){
        i--;
        j++;
        c = i + j;
    }
    printf("Value of i = %d\nj = %d\nc = %d\n", i, j, c);
    return 0;
}