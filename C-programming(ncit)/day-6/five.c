/*wap to read annual salary of an employee and decide tax as follows: 
upto 100000: tax = 0%
upto 150000: tax = 15%
above 150000: tax = 25%
*/

#include <stdio.h>

int main(){
    float salary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary > 100000.0 && salary <= 150000.0){
        printf("Your tax is 15 %\n");
    } else if (salary > 150000.0){
        printf("Your tax is 25 %\n");
    } else {
        printf("Your tax is 0 %\n");
    }
    return 0;
}