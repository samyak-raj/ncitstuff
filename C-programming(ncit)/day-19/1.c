#include <stdio.h>
#include <stdlib.h>

struct student{
    int age, roll;
    char name[100], address[100];
};
int main(){
    int i, n;
    struct student s[100];
    printf("Enter value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++){
        printf("Enter details of student %d\n", i);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter address: ");
        scanf("%s", s[i].address);
    }
    printf("Entered details are: \n");
    for ( i = 1; i <= n; i++){
        if ( s[i].age < 18){
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Roll: %d\n", s[i].roll);
            printf("Address: %s\n", s[i].address);
            }
        }
}