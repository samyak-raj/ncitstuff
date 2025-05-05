//wap to input n elements in an array and find maximum and minimum elements 

#include <stdio.h>

int main(){
    int i, n, a[100], *ptr, max, min;
    ptr = &a[0];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }
    max = *ptr;
    min = *ptr;
    for (i = 0; i < n; i++){
        if (*(ptr + i) > max){
            max = *(ptr + i);
        } else if (*(ptr + i) < min){
            min = *(ptr + i);
        }
    }
    printf("Max: %d\nMin: %d", max, min);
    return 0;
}
