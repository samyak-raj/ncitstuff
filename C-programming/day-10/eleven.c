//wap to print patter: 1, 5, 7, 9, 13, .... upto n terms

#include <stdio.h>
int main(){
    int i, n, a = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%d\t", a);
        a += 4;
    }
    printf("\n");
    return 0;
}