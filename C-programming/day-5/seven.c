//wap that check whether the number entered by user is exactly divisible by 5 but not by 11

#include <stdio.h>

int main(){
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 != 0){
        printf("%d is divisible by 5 but not by 11\n", num);
    } else {
        printf("%d is not divisible by 5 or by 11\n", num);
    }
    return 0;
}





