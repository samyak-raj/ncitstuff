//find output of followning program

#include <stdio.h>

int main(){
    int i = 0, x = 0;
    for (i = 1; i < 10; i *= 2){
        ++x;
        printf("\tx = %d", x++);
    }
    printf("\ni = %d\n", i);
    return 0;
}