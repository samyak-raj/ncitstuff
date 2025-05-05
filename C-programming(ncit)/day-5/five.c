//a company pays its employee on hourly basis. If a employee works for 8 hours, he gets Rs.100 per hour and Rs.20 per hour for additional hours. Wap to read working hour of an employee and calculate the total salary.
//wap that inputs cost price and selling price and then determine whether there is profit or loss
//wap that check whether the number entered by user is exactly divisible by 5 but not by 11
#include <stdio.h>

int main(){
    int salary, working_hour;

    printf("Enter the working hours: ");
    scanf("%d", &working_hour);

    if (working_hour <= 8){
        salary = (working_hour * 100);
    } else {
        salary = (8 * 100) + (working_hour - 8) * 120;
    }

    printf("Salary: %d\n", salary);

    return 0;
}