//wap to count no. of digits in input number

#include <stdio.h>

int main(){
    int n, count=0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while (n != 0){
        n = n/10;
        count += 1;
        
    }
    printf("Count: %d\n", count);
    return 0;

}