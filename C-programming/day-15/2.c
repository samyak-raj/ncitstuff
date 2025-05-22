//wap to check whether the given string is pallindrome or not

#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20];
    printf("Enter a string: ");
    gets(str1);
    strlwr(str1);
    strcpy(str2, str1);
    strrev(str2);

    if (strcmp(str1, str2) == 0){
        printf("\nThe given string is pallindrome");
    } else {
        printf("\nThe given string is not pallindrome");
    }
    return 0;
}