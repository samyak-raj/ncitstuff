//wap to input mxn order matrix and find sum of all odd and even numbers

#include <stdio.h>
int main(){
    int a[10][10], i, j, m, n, esum=0, osum=0;
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
            if (a[i][j] % 2 == 0){
                esum += a[i][j];
            } else {
                osum += a[i][j];
            }
        }
    }

    printf("Esum: %d\nOsum: %d", esum , osum);

    return 0;
}