/*
wap to read temp in fahrenheit and display the message as: 
nice day: if temp > 60 and temp < 80
cold day: if temp <= 60
hot day: if temp >= 80
*/

#include <stdio.h>

int main(){
    float temp;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &temp);

    if (temp <= 60){
        printf("cold day\n");
    } else if (temp >= 80){
        printf("hot day\n");
    } else {
        printf("Nice day\n");
    }
    return 0;
}
