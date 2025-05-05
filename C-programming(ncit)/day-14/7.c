//wap to  enter mxn order matrix and find sum of all diagonal elements in the matrix

#include <stdio.h>

int main(){
    int a[10][10], i, j, m, n, sum=0;
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter array elements: \n");

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The array is: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if (i == j || i + j == m - 1){
                sum += a[i][j];
            }
        }
    }

    printf("Sum of all diagonal elements: %d\n", sum);
    return 0;
}