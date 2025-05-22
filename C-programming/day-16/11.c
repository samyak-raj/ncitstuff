//wap to swap two numbers using call by value

#include <stdio.h>
void swap(int, int);

int main(){
    int a, b;
    a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    return 0;
}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Ater swapping: a = %d, b = %d\n", a, b);
}