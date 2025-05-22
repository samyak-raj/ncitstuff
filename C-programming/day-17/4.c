//wap to enter n elements in an array and find maximum and minimum elements

#include <stdio.h>

void display(int d[], int o);
void maxmin(int m[], int p);
int i;
int main(){
    int a[100], n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    display(a, n);
    maxmin(a, n);
    return 0;
}

void display(int d[], int o){
    printf("The array is \n");
    for (i = 0; i < o ; i++){
        printf("%d\t", d[i]);
    }
}

void maxmin(int m[], int p){
    int max, min;
    max = m[0];
    min = m[0];

    for ( i = 0; i< p; i++){
        if (m[i] > max){
            max = m[i];
        } 
        if (m[i] < min){
            min = m[i];
        }
    }

    printf("Max: %d\nMin: %d", max, min);
}