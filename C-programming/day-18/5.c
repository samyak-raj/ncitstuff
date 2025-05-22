//wap to input n elements in an array and sort them using pointer
#include <stdio.h>

int main(){
    int i, j, a[100], n, temp, *ptr;
    ptr = &a[0];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", (ptr + i));
    }

    for (i = 0; i < n-1; i++){
        for (j = i + 1; j < n; j++){
            if (*(ptr + i) > *(ptr + j)){
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("THe sorted array is \n");
    for ( i = 0; i < n; i++){
        printf("%d\t", *(ptr + i));
    }
    return 0;
}