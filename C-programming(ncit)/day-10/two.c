//wap to print n natural numbers and it sum using do while

#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    do {
        sum += i;
        printf("%d\t", i);
        i++;
    } while(i <= n);
    printf("\n%d\n", sum);
    return 0;
}

