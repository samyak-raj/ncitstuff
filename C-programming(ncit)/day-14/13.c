//wap to perform matrix addition

#include <stdio.h>
int main(){
    int i, j, m, n, a[10][10], b[10][10], c[10][10];
    printf("Enter row and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter first array elements: \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            scanf("%d", &a[i][j]);    
        }
    }
    printf("Enter second array elements: \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
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
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            printf("%d\t", b[i][j]);    
        }
        printf("\n"); 
    }
    printf("The sum of the arrays is \n");
    for (i = 0; i < m; i++){
        for (j = 0 ; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);    
        }
        printf("\n"); 
    }
    return 0;
}