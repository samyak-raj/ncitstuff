//wap to print n natural numbers

#include <stdio.h>

int main(){
    int i=1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d\t", i);
        i++;
    }
    return 0;
}