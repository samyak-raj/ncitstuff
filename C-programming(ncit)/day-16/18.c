//wap to find sum of two numbers using macros
#include <stdio.h>
#define sum(a, b) a + b

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum: %d", sum(a, b));
    return 0;
}