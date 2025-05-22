//wap to check whether the entered number is prime or not

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++){
        if (n % i == 0){
            printf("%d is not prime\n", n);
            break;
        }
    }
    if (i == n){
        printf("%d is prime\n", n);
    }
    return 0;

}