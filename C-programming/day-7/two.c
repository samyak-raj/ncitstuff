//calculate amount of electricty bill consumed

#include <stdio.h>
#define MC 50.0

int main(){
    float preunit, curunit, unit, amount;
    printf("Enter previous unit and current unit: ");
    scanf("%f%f", &preunit, &curunit);

    unit = curunit - preunit;

    if (unit >= 0 && unit <=100){
        amount = unit * 8 + MC;
    } else if (unit > 100 && unit <= 300){
        amount = 100 * 8 + (unit - 100) * 12 + MC;
    } else {
        amount = 100 * 8 + 200 * 12 + (unit - 300) * 15 + MC;
    }

    printf("Total amount: %.2f\n", amount);

    return 0;
}