// wap to ofind area of two circle having different radius using function

#include <stdio.h>
float area(float);

int main(){
    float r1, r2, a1, a2;
    printf("Enter radius of two circles: ");
    scanf("%f%f", &r1, &r2);
    a1 = area(r1);
    a2 = area(r2);
    printf("Area of circle with radius %.2f is %.2f\n", r1, a1);
    printf("Area of circle with radius %.2f is %.2f\n", r2, a2);
    return 0;
}
float area(float r){
    return 3.14 * r * r;
}