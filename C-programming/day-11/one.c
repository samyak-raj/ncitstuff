#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, choice;
    float c, f;
    char ch;
    while (1) {
        printf("\n-----MENU-----");
        printf("\n1. Find max of two numbers\n2. Convert temp in celcius to temp in fahrenheit\n3. Convert character to equivalent ASCII code.\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                if (a > b){
                    printf("%d is maximum\n", a);
                } else {
                    printf("%d is maximum\n", b);
                }
                break;
            
            case 2: 
                printf("Enter temp in celcius: ");
                scanf("%f", &c);
                f = c * 1.8 + 32;
                printf("Temp in fahrenheit: %.2f\n", f);
                break;
            
            case 3:
                printf("Enter a character: ");
                scanf(" %c", &ch);
                printf("The equivalent ASCII: %d\n", ch);
                break;
            
            case 4: 
                exit(0);
            
            default : 
                printf("You entered wrong choice.\n");
        }
    } 
    return 0;
}