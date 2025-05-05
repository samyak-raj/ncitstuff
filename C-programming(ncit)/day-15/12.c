//wap to print following pattern
#include <stdio.h>
#include <string.h>
int main(){
    int i, j;
    char str[20];
    printf("Enter string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++){
        for (j = 0; j <= i; j++){
            printf("%c\t", str[j]);
        }
        printf("\n");
    }

    return 0;
}