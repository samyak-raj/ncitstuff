//wap to find sum of digits of given input number

#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while (n != 0){
        sum += n % 10;
        n = n/10;
        
    }
    printf("Sum: %d\n", sum);
    return 0;
}