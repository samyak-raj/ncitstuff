//wap to input two arrays and add them

#include <stdio.h>
int main(){
    int a[100], b[100], c[100], i, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the first array elements: \n");
    for (i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the second array elements: \n");
    for (i = 0; i< n; i++){
        scanf("%d", &b[i]);
    }
    printf("The first array is : \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\nThe second array is : \n");
    for (i = 0; i < n; i++){
        printf("%d\t", b[i]);
    }

    for (i = 0; i < n; i++){
        c[i] = a[i] + b[i];
    }

    printf("\nThe sum array is: \n");
    for (i = 0; i < n; i++){
        printf("%d\t", c[i]);
    }

    return 0;
}