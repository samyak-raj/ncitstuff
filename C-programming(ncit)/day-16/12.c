//wap to swap two numbers using call by reference

#include <stdio.h>
void swap(int *, int *);

int main(){
    int a, b;
    a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}