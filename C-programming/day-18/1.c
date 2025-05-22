//wap to input  n numbers in an array and display it using pointer

#include <stdio.h>

int main(){
    int a[100], i, n, *ptr;
    ptr = &a[0];

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for ( i = 0 ; i < n; i++){
        scanf("%d", ptr + i);
    }
    printf("The array elements is \n");
    for (i = 0; i < n; i++){
        printf("%d\t", *(ptr + i));
    }
    return 0;
}