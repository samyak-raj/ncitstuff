//wap to find real root of quadratic equation
//5 6 1
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    r1 = ( -b + sqrt((b * b) - (4.0 * a * c)))/ (2.0 * a);
    r2 = ( -b - sqrt((b * b) - (4.0 * a * c)))/ (2.0 * a);

    printf("r1: %.2lf\nr2: %.2lf\n", r1, r2);

    return 0;
}