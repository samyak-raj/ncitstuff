//wap to calculate area of circle using macro
#include <stdio.h>
#define area(r) 3.14 * r * r

int main(){
    float rad;
    printf("Enter radius: ");
    scanf("%f", &rad);
    printf("Area of circle: %.2f", area(rad));
    return 0;
}