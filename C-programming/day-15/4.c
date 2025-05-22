//wap to copy one string to another string without using string handling function

#include <stdio.h>

int main(){
    int i;
    char str1[20], str2[20];
    printf("Enter a string: ");
    gets(str1);

    for (i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("The copied string is %s", str2);
    return 0;
}