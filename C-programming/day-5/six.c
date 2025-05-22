//wap that inputs cost price and selling price and then determine whether there is profit or loss

#include <stdio.h>

int main(){
    float cp, sp;

    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);

    if (cp < sp){
        printf("Profit\n");
    } else {
        printf("Loss\n");
    }

    return 0;
}