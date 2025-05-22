//wap to input 5 student name and display it

#include <stdio.h>
 
int main(){
    char name[5][20];  
    int i;
    printf("Enter name of 5 students: \n");
    for (i = 0; i < 5; i++){
        gets(name[i]);
    }
    printf("\nThe five names are: \n");
    for (i = 0; i < 5; i++){
        puts(name[i]);
    }
    return 0;
}