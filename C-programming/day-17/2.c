//wpa to enter n elements in an array and display in reverse order

#include <stdio.h>
void display(int d[], int m);
void revese(int r[], int p);
int i;

int main(){
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    display(a, n);
    reverse(a, n);
    return 0;
}
void display(int d[], int m){
    printf("The elements are: \n");
    for (i = 0; i < m; i++){
        scanf("%d", &d[i]);
    }
}

void reverse(int r[], int p){
    printf("The elements in reverse order are: \n");
    for (i = p - 1; i >= 0; i--){
        printf("%d\t", r[i]);
    }
}