//wap to print whether the entered character is uppercase, lowercase, digit or special symbol.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 65 && ch <= 90){
        printf("%c is in uppercase\n", ch);
    } else if(ch >= 97 && ch <= 122){
        printf("%c is in lowercase\n", ch);
    } else if(ch >= 48 && ch <= 57){
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is a special symbol\n", ch);
    }
    return 0;
}