//wap to input n num in array and display it in reverse order

#include <stdio.h>

int main(){
    int i, n, a[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for (i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is : \n");
    for (i = 0; i < n; i++){
        printf("%d", a[i]);
    }

    printf("\nThe array in reverse order is: \n");

    for (i = n - 1; i >= 0; i--){
        printf("%d\t", a[i]);
    }

    return 0;
}