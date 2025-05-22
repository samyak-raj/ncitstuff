//wap to find whether the entered number is armstrong or not

#include <stdio.h>

int main(){
    int n, rem, sum=0, num;
    printf("Enter value of n: ");
    scanf("%d", &n);
    num = n;
    while (n != 0){
        rem = n % 10;
        sum += (rem * rem * rem);
        n = n / 10;
    }
    if (num == sum){
        printf("%d is armstrong.\n", num);
    } else {
        printf("%d is not armstrong.\n", num);
    }
    return 0;
}