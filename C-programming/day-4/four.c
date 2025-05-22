//wap to ask for your height in feet and inches  and your weight in kilogram (use three variables to store the information). Convert your height in feet (multiply by 12) and inches to height in inches. Then convert your height in inches to height in meter by multiplying it by 0.0254. Now divide your weight by square of your height in meter and finally assign the output to variable ratio. Use symbolic constants to represent vairous conversions.

#include <stdio.h>
#define FTOI 12
#define ITOM 0.0254

int main(){
    float feet, inches;
    float weight, hinm, ratio;

    printf("Enter height in feet and inches: ");
    scanf("%f%f", &feet, &inches);

    printf("Enter weight in kilogram: ");
    scanf("%f", &weight);

    inches = (feet * FTOI) + inches;
    hinm = inches * ITOM;

    ratio = weight / (hinm * hinm);

    printf("BMI: %.2f\n", ratio);

    return 0;
}