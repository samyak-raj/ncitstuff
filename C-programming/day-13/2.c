//wap to input n elements in an array and find sum of all elements 
#include <stdio.h>

int main(){
    int n, i, sum=0, a[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("The array elements are: \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    for (i = 0; i < n; i++){
        sum += a[i];
    }
    printf("\nSum of all elements: %d", sum);
    return 0;
}