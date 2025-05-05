//wap to find whether the given number is pallindrome or not

#include <stdio.h>

int main(){
    int n, num, rev=0, rem;
    printf("Enter value of n: ");
    scanf("%d", &n);
    num = n;

    while (n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n /10;
    }

    if (num = rev){
        printf("%d is pallindrome\n", num);
    } else {
        printf("%d is not pallindrome\n", num);
    }
    return 0;
}