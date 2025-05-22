// a company insures drive in following cases:

#include <stdio.h>

int main(){
    int age;
    char gender, ms;

    printf("Enter age, m for married and u for unmarried, M for male and F for female: ");
    scanf("%d %c %c", &age, &ms, &gender);
    // printf("%d", age);
    // printf("%c", ms);
    // printf("%c", gender);

    if ((ms == 'm') || (ms == 'u' && gender == 'M' && age > 30) || (ms == 'u' && gender == 'F' && age > 25)){
        printf("You are insured\n");
    } else {
        printf("You are not insured\n");
    }

    return 0;
}