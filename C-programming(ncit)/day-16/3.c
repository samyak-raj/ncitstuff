//wap to max and min of two numbers using function with return type and argument

#include <stdio.h>
int max(int, int);

int main(){
    int a, b, m;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    m = max(a, b);
    printf("%d is maximum", m);
    return 0;
}

int max(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}