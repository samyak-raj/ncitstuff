//wap to find sum of digits of number

#include <stdio.h>
void sumofDigits(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sumofDigits(n);
    return 0;
}
void sumofDigits(int n){
    int sum = 0;
    while (n > 0){
        sum += n % 10;
        n = n / 10;
    }
    printf("Sum of digits of the number is %d\n", sum);
}