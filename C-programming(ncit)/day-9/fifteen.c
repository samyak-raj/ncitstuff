//wap to print following terms up to n: (1^2 + 2^2)/3^2 , (2^2 + 3^2)/4^2, ... , n terms

#include <stdio.h>

int main(){
    float sum = 0, i = 1, n;

    printf("Enter n: ");
    scanf("%f", &n);

    while (i <= n){
        sum = ((i * i) + ((i + 1) * (i + 1))) / ((i + 2) * (i + 2));

        printf("%f\t", sum);
        i++;
    }
    return 0;
}