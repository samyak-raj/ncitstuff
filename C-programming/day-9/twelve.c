//wap to find reverse of input number

#include <stdio.h>

int main(){
    int n , rev=0, rem;

    printf("Enter n: ");
    scanf("%d", &n);
    while (n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Revevrse number: %d\n", rev);
    return 0;
}