//wap to enter n elements in an array and find whether the given element is present or not. Also find it's position 
#include <stdio.h>
void display(int d[], int m);
void searchElement(int s[], int o, int k);
int i, j;
int main(){
    int n, key, a[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for( i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    display(a, n);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    searchElement(a, n, key);
    return 0;
}

void display(int d[], int m){
    printf("The array is \n");
    for ( i = 0; i < m; i++){
        printf("%d\t", d[i]);
    }
}

void searchElement(int s[], int o, int k){
    int found = 0;
    for ( i = 0; i < o; i++){
        if (s[i] == k){
            printf("Element %d is found at position %d", k, i+1);
            found = 1;
            break;
        }
    }
    if ( found != 1){
        printf("Element %d is not found in array", k);
    }
}