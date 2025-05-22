//wap to find reverse of a number using function

#include <stdio.h>
void reverse(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}

void reverse(int n){
    int r = 0;
    while (n > 0){
        r = r * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse of the number is %d\n", r);
}