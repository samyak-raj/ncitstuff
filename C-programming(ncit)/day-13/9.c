//wap to sort array elements in ascending order (selection sort)

#include <stdio.h>
int main(){
    int i, j, n, a[100], temp;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array is: \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    
    for (i = 0; i < n - 1; i++){
        for (j = i+1 ; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nThe sorted array is: \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}