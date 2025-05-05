//wap to check whether the entered year is leap year not.

#include <stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("%d is leap year\n", year);
    } else {
        printf("%d is not leap year\n", year);
    }
    // if (year % 400 == 0){
    //     printf("%d is leap year\n", year);
    // } else if (year % 100 == 0){
    //     printf("%d is not leap year\n", year);
    // } else if (year % 4 == 0){
    //     printf("%d is leap year\n", year);
    // } else{
    //     printf("%d is not leap year\n", year);
    // }
    return 0;
}