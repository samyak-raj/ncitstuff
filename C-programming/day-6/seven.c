/*
an orgarniztion is dealing in two items, say A and B, provide the comission on the sale of these items accordign to the following policy:
a. commission rate of A is 6% upto the sale of Rs.2000, if the sale of A is above 2000 then the commission is 7% on the extra sale
b. for B, 10% upto 4000 and if the sale is above 4000, commission is 12% on extra sale 
*/

#include <stdio.h>

int main(){
    float a, b, com_a, com_b;

    printf("Enter the sale of a and b: ");
    scanf("%f%f", &a, &b);

    if (a <= 2000){
        com_a = 0.06 * a;
    } else {
        com_a = (0.06 * 2000) + (a - 2000) * 0.07;
    }

    if (b <= 4000){
        com_b = 0.1 * b;
    } else {
        com_b = (0.1 * 4000) + (b - 4000) * 0.12;
    }

    printf("Commission of a: %.2f\n", com_a);
    printf("Commission of b: %.2f\n", com_b);
    return 0;
}