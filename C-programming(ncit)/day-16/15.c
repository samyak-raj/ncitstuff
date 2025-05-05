//wap to find fibonacci series upto n terms using recursion
#include <stdio.h>
int fib(int);
int main(){
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("%d\t", fib(i));
    }
    return 0;
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}