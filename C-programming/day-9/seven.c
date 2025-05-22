//wap to print sum of all odd and even numbers upto n terms and also count the total no. of odd and even numbers

#include <stdio.h>

int main(){
    int i=1, esum=0, osum=0, ecount=0, ocount=0, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i <= n){
        if (i % 2 == 0){
            ecount += 1;
            esum += i;
        } else {
            ocount += 1;
            osum += i;
        }
        i++;
    }
    printf("Esum: %d\tEcount: %d\n", esum, ecount);
    printf("Osum: %d\tOcount: %d\n", osum, ocount);
    return 0;
}