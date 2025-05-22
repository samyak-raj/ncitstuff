//wap to input n elements in an array and find sum of all elements using pointer
#include <stdio.h>
int main(){
    int i, a[100], n, *ptr, sum = 0;
    ptr = &a[0];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++){
        sum += *(ptr + i);
    }
    printf("Sum: %d", sum);
    return 0;
}