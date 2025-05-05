//wap to print sum of cos series

#include <stdio.h>

int main(){
    int i, n;
    float t, sum, x;
    printf("Enter value of x and n: ");
    scanf("%f%d", &x, &n);
    x = x * 3.14159 / 180.0;
    t = 1;
    sum = 1;
    for (i = 1; i<=n; i++){
        t = (t * (-1) * x * x) / (2 * i * (2 * i - 1));
        sum += t;
    }
    printf("cos(%f) = %.4f\n", x, sum);
    return 0;

}