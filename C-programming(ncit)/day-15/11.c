//wap to check whether the given string is pallindrome or not without using string handling function

#include <stdio.h>

int main(){
    int i, len=0, flag=0;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++){
        len += 1;
    }

    for (i = 0; i < len / 2 ; i++){
        if (str[i] != str[len - i - 1]){
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        printf("The string is pallindrome");
    } else {
        printf("The string is not pallindrome");
    }
    return 0;
}