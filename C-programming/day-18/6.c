//wap to enter mxn order matrix and find sum of all element using pointer
#include <stdio.h>
int main(){
    int a[10][10], i, j, m, n, *ptr, sum = 0;
    ptr = &a[0][0];
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter array elements \n");
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", (ptr + m*i) + j);
        }
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            sum += *((ptr + m * i) + j);
        }
    }
    printf("Sum: %d", sum);
    return 0;
}