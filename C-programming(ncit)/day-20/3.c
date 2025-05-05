//wap to create the following structure and read record of n students and save it to file named student.dat and display the information of those student whose faculty is engineering
//roll, name, address, faculty, dob(mm, dd, yy)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dob{
    int dd, mm, yy;
};

struct student{
    int roll;
    char name[20], address[20], faculty[20];
    struct dob d;
};

int main(){
    int i, n;
    FILE *fp;
    struct student s[100];
    fp = fopen("student.dat", "wb+");

    printf("Enter how many records: ");
    scanf("%d", &n);
    
    getchar();
    for ( i = 0; i < n; i++){
        printf("\nEnter record of %d student\n", i+1);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Enter address: ");
        gets(s[i].address);
        printf("Enter faculty: ");
        gets(s[i].faculty);
        printf("Enter DOB (dd/mm/yy): ");
        scanf("%d %d %d", &s[i].d.dd, &s[i].d.mm, &s[i].d.yy);
        getchar();
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }
    rewind(fp);
    printf("The records of student whose faculty is engineering are\n");
    
    for (i = 0 ; i < n; i++){
        fread(&s[i], sizeof(s[i]), 1, fp);
        if (strcmp(s[i].faculty, "engineering") == 0){
            printf("Name: %s\tRoll: %d\tAddress: %s\tFaculty: %s\tDOB: %d-%d-%d\n", s[i].name, s[i].roll, s[i].address, s[i].faculty, s[i].d.dd, s[i].d.mm, s[i].d.yy);
        }
    }
    fclose(fp);
    return 0;
}


