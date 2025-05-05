//wap to check is number is pallindrome or not

#include <stdio.h>

void pallindrome(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    pallindrome(n);
    return 0;
}

void pallindrome(int n){
    int rev = 0, original = n;
    while (n > 0){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (rev == original){
        printf("%d is pallindrome\n", original);
    } else {
        printf("%d is not pallindrome\n", original);
    }
}