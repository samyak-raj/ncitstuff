//wap to find length of string without using string handling function

#include <stdio.h>

int main(){
    char str[20];
    int i, count=0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++){
        count += 1;
    }
    printf("The length of %s is %d", str, count);
    return 0;
}