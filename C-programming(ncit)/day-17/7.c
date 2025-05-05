//wap to enter mxn matrix and display it using function

#include <stdio.h>
void display(int d[20][20], int m, int n);
int i, j;
int main(){
    int a[10][10], r, c;
    printf("Enter row and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix elements \n");
    for ( i = 0; i < r; i++){
        for ( j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    display(a, r, c);
    return 0;
}

void display(int d[20][20], int m, int n){
    printf("The matrix elements \n");
    for ( i = 0; i < m; i++){
        for (j = 0; j < n; i++){
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
}