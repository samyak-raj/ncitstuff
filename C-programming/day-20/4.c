#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name[20], address[20], faculty[20], program[20];
    float gpa;
};

int main(){
    int i;
    FILE *fp;
    struct student s[2];
    fp = fopen("RESULT.DAT", "wb+");
    for (i = 0; i < 2; i++){
        printf("\nEnter record of %d student: \n", i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter address: ");
        scanf("%s", s[i].address);
        printf("Enter faculty: ");
        scanf("%s", s[i].faculty);
        printf("Enter program: ");
        scanf("%s", s[i].program);
        printf("Enter percentage: ");
        scanf("%f", &s[i].gpa);
        if(s[i].gpa < 0 || s[i].gpa > 4.0){
            printf("Invalid gpa");
            break;
        }
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }
    rewind(fp);
    printf("The record of students whole facult is engineering and gpa > 3.5 are \n");
    for (i = 0; i < 2; i++){
        
        if (strcmp(s[i].faculty, "engineering") == 0 && s[i].gpa > 3.5){
            fread(&s[i], sizeof(s[i]), 1, fp);
            printf("Name: %s\tAddress: %s\tFaculty: %s\tProgram: %s\tGPA: %.2f\n", s[i].name, s[i].address, s[i].faculty, s[i].program, s[i].gpa);
        }
    }
    fclose(fp);
    return 0;

}