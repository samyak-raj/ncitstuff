//wap to reverse a string without using string handling function

#include <stdio.h>

int main(){
    int length, i, j;
    char str[20];
    printf("Ente a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++){
        length += 1;
    }

    printf("The reversed string is: ");
    for (j = i - 1; j >= 0; j--){
        printf("%c", str[j]);
    }
    return 0;
}