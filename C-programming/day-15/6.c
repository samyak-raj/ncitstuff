//wap to input string and count  no. of vowel in it

#include <stdio.h>

int main(){
    int i, count;
    char str[20];
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
            count++;
        }
    }
    printf("The number of vowels: %d", count);
    return 0;
}