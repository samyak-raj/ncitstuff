//wap to input n numbers in an array and copy it in another array
#include <stdio.h>

int main(){
    int i, n, a[100], b[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for (i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is : \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    for (i = 0; i < n; i++){
        b[i] = a[i];        
    }

    printf("\nThe copied array is: \n");

    for (i = 0; i < n; i++){
        printf("%d\t", b[i]);
    }
    return 0;
}