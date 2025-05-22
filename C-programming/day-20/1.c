//wap to record n student name, roll, age, percentage. Write it to a file name student.txt and display the record after reading the file

#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age, roll;
    float per;
};

int main(){
    int i, n;
    struct student s[100];
    FILE *fp;
    printf("Enter number of records: ");
    scanf("%d", &n);
    fp = fopen("student.txt", "w+");
    if (fp = NULL){
        printf("File cannot be opened");
        exit(0);
    }
    for (i = 0; i < n; i++){
        printf("\nEnter record of %d student\n", i+1);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter percentage: ");
        scanf("%f", &s[i].per);
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }

    rewind(fp);
    printf("The details of students are \n");

    for ( i = 0; i < n; i++){
        fread(&s[i], sizeof(s[i]), 1, fp);
        printf("Name = %s\tAge = %d\t Roll = %d\tPercentage = %.2f\n", s[i].name, s[i].age, s[i].roll, s[i].per);
    }
    fclose(fp);
    return 0;
}