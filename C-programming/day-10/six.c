//wap to find sum of all the odd and even numbers upto n terms. Also find total count

#include <stdio.h>

int main(){
    int i, esum=0, osum=0, ecount=0, ocount=0, n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if (i % 2 == 0){
            ecount += 1;
            esum += i;
        } else {
            ocount += 1;
            osum += i;
        }
    }
    printf("Esum: %d\tEcount: %d\n", esum, ecount);
    printf("Osum: %d\tOcount: %d\n", osum, ocount);
    return 0;
}