//wap to input n numbers in an array and find maximum and minimum elements

#include <stdio.h>

int main(){
    int i, n, a[100], max, min;
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

    max = a[0];
    min= a[0];

    for (i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        } 
        if (a[i] < min){
            min = a[i];
        }
    }

    printf("\nMaximum: %d\nMinimum: %d", max, min);
    return 0;
}