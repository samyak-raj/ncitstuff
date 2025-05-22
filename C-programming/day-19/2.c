#include <stdio.h>

struct dob {
    int day, month, year;
};
struct student{
    int age, roll;
    char name[100];
    struct dob d;
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
        printf("Enter dob(dd/mm/yy): ");
        scanf("%d %d %d", &s[i].d.day, &s[i].d.month, &s[i].d.year);
    }
    printf("Entered details are: \n");
    for ( i = 1; i <= n; i++){
            
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Roll: %d\n", s[i].roll);
            printf("DOB: %d-%d-%d\n", s[i].d.day, s[i].d.month, s[i].d.year);
    }
}