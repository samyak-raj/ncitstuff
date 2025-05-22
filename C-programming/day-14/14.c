//wap to perform matrix multiplication

#include <stdio.h>

int main(){
    int i, j, k, m, n, p, q, a[10][10], b[10][10], c[10][10];
    printf("Enter row and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter row and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p){
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    printf("Enter first array elements: \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            scanf("%d", &a[i][j]);    
        }
    }
    printf("Enter second array elements: \n");
    for (i = 0; i < p; i++){
        for (j = 0 ; j < q; j++){
            scanf("%d", &b[i][j]);    
        }
    }
    printf("The first array is \n");   
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            printf("%d\t", a[i][j]);    
        }
        printf("\n"); 
    }
    printf("The second array is \n");   
    for (i = 0; i < p; i++){
        for (j = 0 ; j < q; j++){
            printf("%d\t", b[i][j]);    
        }
        printf("\n"); 
    }
    printf("The product of the arrays is \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < q; j++){
            c[i][j] = 0;
            for (k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", c[i][j]);    
        }
        printf("\n"); 
    }
    return 0;
}