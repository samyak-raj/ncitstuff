//wap to input mxn matrix and find sum of all elements

#include <stdio.h>
int main(){
    int a[10][10], i, j, m, n, sum=0;
    printf("Enter rows and columns: \n");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elements: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix elements are: \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            sum += a[i][j];
        }
    }
    printf("Sum of all elements is: %d", sum);

    return 0;
}