//wap to find minimum of three numbers(nested if else_)

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b){
        if (a < c){
            printf("%d is minimum.\n", a);
        } else {
            printf("%d is minimum.\n", c);
        }
    } else {
        if (b < c){
            printf("%d is minimum.\n", b);
        } else {
            printf("%d is minimum.\n", c);
        }
    }
    return 0;
}