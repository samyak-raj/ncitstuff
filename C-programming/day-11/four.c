/*write a menu driven program to display the following menu
1. find maximum of two numbers
2. find sum of n natural numbers
3. find factorial of given number
4. Display ASCII value o a character
5. exit program
and perform above until user exitrs
*/

#include <stdio.h>

int main(){
    int a, b, choice, n, sum = 0, fact = 1, i;
    while (1) {
        printf("-----MENU-----\n");
        printf("1. Find max of two numbers\n2. Find sum of n natural numbers\n3. Find factorial of given number\n4. Display ASCII value of a character\n5. Exit\n");
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
                printf("Enter a number: ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++){
                    sum += i;
                }
                printf("Sum of %d natural numbers: %d\n", n, sum);
                break;
            
            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++){
                    fact *= i;
                }
                printf("Factorial of %d: %d\n", n, fact);
                break;
            
            case 4:
                char ch;
                printf("Enter a character: ");
                scanf(" %c", &ch);
                printf("The equivalent ASCII: %d\n", ch);
                break;
            
            case 5: 
                return 0;
            
            default : 
                printf("You entered wrong choice.\n");
        }
    }
}
