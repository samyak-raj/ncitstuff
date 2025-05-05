//wap to input n elements in an array and find reverse of it using pointer

#include <stdio.h>

int main(){
    int i, a[100], n, *ptr;
    ptr = &a[0];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    printf("The array is \n");
    for (i = 0; i < n; i++){
        printf("%d\t", *(ptr + i));
    }

    printf("The array in reverse order is \n");
    for (i = n - 1; i >=0; i--){
        printf("%d\t", *(ptr + i));
    }

    return 0;
}