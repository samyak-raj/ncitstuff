//wap to input marks of 7 subjects in your 1st sem and calculate percentage and based on percentage find out whether it is distinction, 1st division, 2nd division, 4rd division or fail

#include <stdio.h>

int main(){
    float dl, pst, cal, ds, cp, dra, cws, total, per;

    printf("Enter marks of seven subjects: ");
    scanf("%f%f%f%f%f%f%f", &dl, &pst, &cal, &ds, &cp, &dra, &cws);

    total = dl + pst + cal + ds + cp + dra + cws;
    per = total / 7.0;

    if ( dl >= 32 && pst >= 32 && cal >= 32 && ds >= 32 && cp >= 32 && dra >= 32 && cws >= 32){
        if (per >= 80){
            printf("You got distinction\n");
        } else if (per >= 60 && per < 80){
            printf("You got 1st division\n");
        } else if (per >= 40 && per < 60){
            printf("You got 2nd division\n");
        } else {
            printf("You got 3rd division\n");
        }
    } else {
        printf("You failed\n");
    }
    return 0;
}