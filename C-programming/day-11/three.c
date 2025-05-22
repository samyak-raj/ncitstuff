//write a menu driven program to perform vaious arithmetic operations and perform operations given by user
#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, result;
    char choice;

    while(1){
    printf("\n----MENU----\n");
    printf("Addition (+)\nSubtraction (-)\nProduct (*)\nDivision = (/)\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    

    switch(choice){
        case '+':
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a + b;
            printf("Sum: %f", result);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a - b;
            printf("Difference: %f", result);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a * b;
            printf("Product: %f", result);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a / b;
            printf("Division: %f", result);
            break;
        case 'q':
            exit(0);
        default: 
            printf("You entered wrong choice");
        }
    }
    return 0;

}