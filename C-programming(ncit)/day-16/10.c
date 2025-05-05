//wap to check wheter the given number is prime or not

#include <stdio.h>
void isPrime(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}
void isPrime(int n){
    int i;
    for (i = 2; i < n; i++){
        if (n % i == 0){
            printf("%d is not prime", n);
            break;
        }
    }
    if (i == n){
        printf("%d is prime", n);
    }
}