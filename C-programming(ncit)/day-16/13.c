//wap to calculate area and perimeter of circle

#include <stdio.h>

void areaperi(int r, float *a, float *p);

int main(){
    int r;
    float a, p;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    areaperi(r, &a, &p);
    printf("Area of the circle: %.2f\nPerimeter of the circle: %.2f\n", a, p);
    return 0;
}

void areaperi(int r, float *a, float *p){
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}