//wap to input n numbers in an array and find whether the given element is present or not. also find it's position

#include <stdio.h>

int main(){
    int i, n, a[100], flag = 0, position=0, num;
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
    
    printf("\nEnter the number you want to check: ");
    scanf("%d", &num);

    for (i = 0;  i < n; i++){
        if (a[i] == num){
            flag = 1;
            position = i;
        }
    }

    if (flag == 1){
        printf("%d is found at %d position", num, position+1);
    } else {
        printf("%d is not found", num);
    }

    return 0;
}