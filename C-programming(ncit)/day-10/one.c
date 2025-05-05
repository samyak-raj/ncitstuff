//wap to print your name n tims using do-while

#include <stdio.h>

int main(){
    int i = 1, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    do {
        printf("Samyak\n");
        i++;
    } while(i <= n);
    return 0;
}