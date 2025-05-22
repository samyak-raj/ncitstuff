//wap to input n elements in an array and display the elements 
#include <stdio.h>

int main(){
    int n, a[100], i;
    printf("Enter valuue of n: ");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("The array elements are: \n");
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
