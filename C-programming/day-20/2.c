//wap to read name, author, price of 2 books in a library and write it to a file named library.dat and display those records of books whose price is above 300  after reading from file

#include <stdio.h>
#include <stdlib.h>

struct book{
    char name[20], author[20];
    int price;
};

int main(){
    int i;
    struct book s[2];
    FILE *fp;
    fp = fopen("library.dat", "wb+");
    if (fp == NULL){
        printf("File cannot be opened");
        exit(0);
    }
    
    for (i = 0; i < 2; i++){
        printf("\nEnter record of %d book\n", i+1);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter author: ");
        gets(s[i].author);
        printf("Enter price: ");
        scanf("%d", &s[i].price);
        getchar();
        fwrite(&s[i], sizeof(s[i]), 1, fp);
    }
    rewind(fp);
    printf("The details of book above price 300 are \n");
    for (i = 0; i < 2; i++){
        fread(&s[i], sizeof(s[i]), 1, fp);
        if (s[i].price > 300){
            printf("Name = %s\tAuthor = %s\tPrice = %d\n", s[i].name, s[i].author, s[i].price);
        }
    }

    fclose(fp);
    return 0;
}