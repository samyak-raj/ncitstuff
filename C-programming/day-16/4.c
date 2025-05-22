//wap to find minimum of three numbers using function with return type and argument

#include <stdio.h>

int min(int, int, int);

int main(){
    int a, b, c, m;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    m = min(a, b, c);
    printf("%d is minimum", m);
    return 0;
}

int  min(int a, int b, int c){
    if (a < b && a < c){
        return a;
    } else if (b < a && b < c){
        return b;
    } else {
        return c;
    }
}