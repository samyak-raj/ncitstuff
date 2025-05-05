//wap to find if a number is prime or not using dma
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, *ptr;
    printf("Enter a number: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    for (i = 2; i < n; i++){
        if (n % i == 0){
            printf("%d is not prime", n);
            break;
        }
    }
    if (i == n){
        printf("%d is prime", n);
    }
    free(ptr);
    return 0;
}