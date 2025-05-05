//wap to enter mxn order matrix and find sum of indiviual rows and columns

#include <stdio.h>

int main(){
    int a[10][10], i, j, m, n, sum;
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
    //for individual rows
    for (i = 0; i < m; i++){
        sum = 0;
        for (j = 0; j < n; j++){
            sum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, sum);
    }
    //for individual columns
    // for (j = 0; j < n; j++){
    //     sum = 0;
    //     for (i = 0; i < m; i++){
    //         sum += a[i][j];
    //     }
    //     printf("Sum of column %d: %d\n", j+1, sum);
    // }
      for (i = 0; i < m; i++){
        sum = 0;
        for (j = 0; j < n; j++){
            sum += a[j][i];
        }
        printf("Sum of column %d: %d\n", j+1, sum);
    }
    return 0;
}