//wap to find power of a number using recursion

#include <stdio.h>
int power (int, int);
int main(){
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &p);
    printf("%d raised to the power %d is %d\n", n, p, power(n, p));
    return 0;
}

int power(int n, int p){
    if (p == 0){
        return 1;
    }
    return n * power(n, p - 1);
}