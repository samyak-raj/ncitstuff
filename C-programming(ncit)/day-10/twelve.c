//wap to generate armstrong number from 100 to 1000

#include <stdio.h>

int main(){
    int sum, rem, i, num;

    for (i = 100; i < 1000; i++){
        sum = 0;
        num = i;

        while (num != 0){
            rem = num % 10;
            sum += (rem * rem * rem);
            num = num / 10;
        }

        if (sum == i){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}