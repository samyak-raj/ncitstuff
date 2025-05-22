//wap to input mxn order matrix and find it's transpose

#include <stdio.h>
int main(){
    int a[10][10], i, j, m, n;
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

    printf("The transpose matrix is : \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}