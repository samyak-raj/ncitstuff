//wap to input mxn order matrix and find its transpose 
#include <stdio.h>
void display(int d[20][20], int m, int n);
void transpose(int t[20][20], int p, int q);
int i, j;
int main(){
    int a[20][20], r, c;
    printf("Enter row and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements \n");
    for ( i = 0; i < r; i++){
        for ( j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    display(a, r, c);
    transpose(a, r, c);
    return 0;
}
void display(int d[20][20], int m, int n){
    printf("The matrix elements \n");
    for ( i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
}
void transpose(int t[20][20], int p, int q){
    printf("The transpose of matrix is \n");
    for ( i = 0; i < p; i++){
        for ( j = 0; j < q; j++){
            printf("%d\t", t[j][i]);
        }
        printf("\n");
    }
}