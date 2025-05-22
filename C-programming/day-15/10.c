//wap to sort n student names

#include <stdio.h>
#include <string.h>

int main(){
    int i, j, n;
    char name[100][20], temp[20];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter %d student names: \n", n);
    for (i = 0; i < n; i++){
        scanf("%s", &name[i]);
    }

    for (i = 0; i < n-1; i++){
        for (j = i + 1; j < n; j++){
            if (strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("The sorted matrix is \n");
    for (i = 0; i < n; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}
