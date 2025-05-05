//wap to find multiplication table of given number

#include <stdio.h>

int main(){
    int i, n, prod;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        prod = i * n;
        printf("%d x %d = %d\n", n, i, prod);
    }    

    return 0;
}