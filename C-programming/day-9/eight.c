//wap to find factorial of given number

#include <stdio.h>

int main(){
    int i=1, fact=1, n;
    printf("Enter value of n: ", n);
    scanf("%d", &n);

    while (i <= n){
        fact *= i;
        i++;
    }

    printf("Factorial: %d\n", fact);
    return 0;
}