//wap to enter mxn order matrix and find maximum and minimum elements in the matrix

#include <stdio.h>

int main(){
    int a[10][10], i, j, m, n, max, min;
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
    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }
            if (a[i][j] < min){
                min = a[i][j];
            }
        }
    }

    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}