//wap to input string and convert all lowercase to uppercase and vice versa

#include <stdio.h>

int main(){
    int i;
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("The orignial string is: %s\n", str);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    printf("The string is: %s", str);
    return 0;
}