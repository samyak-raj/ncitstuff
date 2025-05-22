//wap to enter name and address of a person and display it 
#include <stdio.h>

int main(){
    char name[20], address[50];
    printf("Enter name: ");
    gets(name);
    printf("Enter address: ");
    gets(address);
    
    printf("Name: %s\nAddress: %s", name, address);\
    return 0;
}