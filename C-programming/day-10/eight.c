//wap to print fibonacci series where intital terms are provided by user

#include <stdio.h>

int main(){
    int i, n, a, b, c;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("%d\t%d\t", a, b);
    for (i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d\t", c);
    }
    return 0;
}