//wap to enter mxn order matrix and convert it into upper triangular matrix and display it

#include <stdio.h>

int main(){
    int i, j, m, n, a[10][10];
    printf("Enter row and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter array elements: \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            scanf("%d", &a[i][j]);    
        }
    }
    
    printf("The array is \n");   
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            printf("%d\t", a[i][j]);    
        }
        printf("\n"); 
    }
    printf("The upper triangular matrix is \n");
    for (i = 0; i < m; i++){
        for(j=0; j < n; j++){
            if (i > j){
                printf("0\t");
            } else {
                printf("%d\t", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}