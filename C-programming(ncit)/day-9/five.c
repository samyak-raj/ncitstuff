//wap to print sum of numbers n natural numbers

#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        
        i++;
    }
    printf("Sum: %d\n", sum);
    return 0;
}