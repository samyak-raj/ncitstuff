//wap to find sum of n natural even numbers

#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while(i <= n){
        if (i % 2 == 0){
            sum += i;
        }
        i++;
    }
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}




