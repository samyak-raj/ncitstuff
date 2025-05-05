//wap to find maximum of four numbers entered by user(else if) 

#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d){
        printf("%d is maximum.\n", a);
    } else if (b > c && b > d){
        printf("%d is maximum.\n", b);
    } else if ( c > d){
        printf("%d is maximum.\n", c);
    } else {
        printf("%d is maximum.\n", d);
    }
    return 0;
}