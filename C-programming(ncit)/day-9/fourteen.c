//wap to find sum of series 1^2 + 2^2 + 3^3 + ... + n^2

#include <stdio.h>

int main(){
    int n, sum=0, i=1;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(i <= n){
        sum += (i * i);
        i++;
    }
    printf("Sum: %d\n", sum);
    return 0;

}