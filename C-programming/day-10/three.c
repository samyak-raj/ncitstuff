//wap to print sum of all odd and even numbers upto n terms

#include <stdio.h>

int main(){
    int i = 1, esum=0, osum=0, n;
    printf("ENter value of n: ");
    scanf("%d", &n);

    do {
        if (i % 2 == 0){
            esum += i;
        } else {
            osum += i;
        }
        i++;
    } while(i <= n);

    printf("Esum = %d\nOsum = %d\n", esum, osum);
    return 0;

}