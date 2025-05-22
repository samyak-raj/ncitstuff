//wap to input n elements in an array and find sum of all odd and even elements and also find their count 
#include <stdio.h>
void display(int d[], int m);
void oddeven(int o[], int p);
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
    oddeven(a, n);
    return 0;
}
void display(int d[], int m){
    printf("THe array elemetns are: \n");
    for (i = 0; i < m; i++){
        printf("%d\t", d[i]);
    }
}

void oddeven(int o[], int p){
    int esum=0, osum=0, ecount=0, ocount=0;
    for (i=0; i < p; i++){
        if (o[i] % 2 == 0){
            esum += o[i];
            ecount += 1;
        } else {
            osum += o[i];
            ocount += 1;
        }
    }
    printf("\nOsum: %d\tOcount: %d\nEsum: %d\tEcount: %d", osum, ocount, esum, ecount);
}