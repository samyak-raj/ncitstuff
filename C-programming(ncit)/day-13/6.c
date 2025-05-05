//wap to input n numbers in an array and find sum of all even and odd elements and count their number

#include <stdio.h>

int main(){
    int i, n, a[100], esum=0, osum=0, ocount=0, ecount=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for (i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is : \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    for (i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            esum += a[i];
            ecount += 1;
        } else{
            osum += a[i];
            ocount += 1;
        }
    }

    printf("\nEsum: %d\tEcount: %d\nOsum: %d\tOcount: %d", esum, ecount, osum, ocount);
    return 0;
}