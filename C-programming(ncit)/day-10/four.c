//wap to print sum of n natural numbers

#include <stdio.h>

int main(){
    int i, n, sum=0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++){
        sum += i;
    }

    printf("Sum: %d\n", sum);
    return 0;
}