//wap to calculate factorial of a given number using function

#include <stdio.h>
int factorial(int);
int main(){
    int n, fact;
    printf("Enter n: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial: %d", fact);
    return 0;
}

int factorial(int n){
    int i, f = 1;
    for (i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}
