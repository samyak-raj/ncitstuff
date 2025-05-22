//wap to find maximum of three numbers(nested if else_)

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b){
        if (a > c){
            printf("%d is maximum.\n", a);
        } else {
            printf("%d is maximum.\n", c);
        }
    } else {
        if (b > c){
            printf("%d is maximum.\n", b);
        } else {
            printf("%d is maximum.\n", c);
        }
    }
    return 0;
}