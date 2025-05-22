/*
a=2 b=2
1. b = a++ + a++ (a = 4, b = 5)
2. b = a++ + ++a (a = 4, b = 6)
3. b = ++a + a++ (a = 4, b = 7)
4. b = ++a + ++a (a = 4, b = 8)
*/
#include <stdio.h>
int main(){
    int a= 2, b =2;

    // b = a++ + a++;
    // b = a++ + ++a;
    // b = ++a + a++;
    b = ++a + ++a;

    printf("a: %d\nb: %d\n", a, b);
    return 0;
}