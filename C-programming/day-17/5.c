//wap to enter n elements in an array and sort them using function

#include <stdio.h>
void display(int d[], int m);
void sort(int s[], int p);
int i, j;
int main(){
    int a[100], n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    display(a, n);
    sort(a, n);
    return 0;

}

void display(int d[], int m){
    printf("\nThe array elements are \n");
    for ( i = 0; i < m; i++){
        printf("%d\t", d[i]);
    }
}

void sort(int s[], int p){
    int temp;
    for (i = 0; i < p -1; i++){
        for (j = i + 1; j < p; j++){
            if ( s[i] > s[j]){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    display(s, p);
}