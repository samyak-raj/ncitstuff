#include <stdio.h>

int main(){
    int n = 0;
    if (n>0){
        goto positive;
    } else if (n<0) {
        goto negative;
    } else {
        goto neutral;
    }

    positive: 
        printf("Number is positive\n");
        return 0;
    negative:
        printf("Number is negative\n");
        return 0;
    neutral:
        printf("Number is zero\n");
        return 0;
}