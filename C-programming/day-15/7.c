//wap to input string and count no. of vowles, semicolon, comma, space, colon

#include <stdio.h>

int main(){
    int i, count = 0, col = 0, sc = 0, com = 0, sp = 0;
    char str[20];
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
            count++;
        } else if (str[i] == ';'){
            sc++;
        } else if (str[i] == ':'){
            col++;
        } else if (str[i] == ' '){
            sp++;
        } else if (str[i] == ','){
            com++;
        }
    }
    printf("The no. of vowels: %d\n", count);
    printf("The no. of semi-colon: %d\n", sc);
    printf("The no. of colon: %d\n", col);
    printf("The no. of space: %d\n", sp);
    printf("The no. of comma: %d\n", com);
    return 0;
}