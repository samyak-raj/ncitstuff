//wap to enter mxn order matrix and find its NORM

#include <stdio.h>
#include <math.h>

int main(){
    int a[10][10], i, j, m, n;
    float sum = 0;
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
            sum += a[i][j] * a[i][j];
        }
    }
    printf("Norm of the matrix: %.2f\n", sqrt(sum));

    return 0;
}