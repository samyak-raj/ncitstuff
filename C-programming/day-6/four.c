/*wap to read length and breadth of room and calculate area of the room and display the message as :
1. auditorium: if area greater than 2500
2. hall: if area greater or equal to 500 and area less or equal to 2500
3. big room: if area greater than 150 and area less than 500
4. small room: if area less or equal to 150
*/ 

#include <stdio.h>

int main(){
    float area, l, b;

    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);

    area = l * b;

    if (area > 2500){
        printf("Auditorium\n");
    } else if ( area >= 500 && area <= 2500){
        printf("Hall\n");
    } else if ( area > 150 && area < 500){
        printf("Big room\n");
    } else {
        printf("Small room\n");
    }
    return 0;
}