//wap to enter mxn matrix and find reverse of it using pointer

#include <stdio.h>

int main(){
    int a[10][10], i, j, m, n, *ptr;
    ptr = &a[0][0];
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter array elements \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", (ptr + m*i) + j);
        }
    }

    printf("The array is \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", *((ptr + m * i) + j));
        }
        printf("\n");
    }

    printf("The array in reverse order is \n");
    for (i = m - 1; i >= 0; i--){
        for (j = n - 1; j >= 0; j--){
            printf("%d\t", *((ptr + m * i) + j));
        }
        printf("\n");
    }

    return 0;
}