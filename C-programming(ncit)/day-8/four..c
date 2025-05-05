//wap to find all the roots of quadratic equation

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c, d, r1, r2, real, img;
    printf("Enter value of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4.0 * a * c;

    if (d > 0){
        r1 = (-b + sqrt(d)) / (2.0 * a);
        r2 = (-b - sqrt(d)) / (2.0 * a); 
        printf("The real and distinct roots are root1 = %f and root2 = %f\n", r1, r2);
    } else if (d == 0){
        r1 = - b / (2.0 * a);
        r2 = r1;
        printf("The real and equal roots are root1 = %f and root2 = %f", r1, r2);
    } else {
        real = - b / (2.0 * a);
        img = sqrt(-d) / (2.0 * a);
        printf("The imaginary root are root1 = %f + %fi and root2 = %f - %fi\n", real, img, real, img);
    }


    return 0;
}