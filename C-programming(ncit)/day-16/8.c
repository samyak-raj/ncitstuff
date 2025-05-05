//wap to check if number is armstrong or not

#include <stdio.h>
void armstrong(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
void armstrong(int n){
    int rem, sum = 0, original = n;
    while (n > 0){
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }
    if (sum == original){
        printf("%d is armstrong\n", original);
    } else {
        printf("%d is not armstrong\n", original);
    }
}