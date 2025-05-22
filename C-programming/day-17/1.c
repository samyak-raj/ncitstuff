//wap to input n numbers in array and display it using function

#include <stdio.h>
void display(int d[], int m);

int i;
int main(){
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    display(a, n);
    return 0;
}
void display(int d[], int m){
    printf("The elements are: \n");
    for (i = 0; i < m; i++){
        printf("%d\t", d[i]);
    }
}