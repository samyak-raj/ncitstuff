//wap to find factorial of given number

#include <stdio.h>
int main(){
    int i, fact = 1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}