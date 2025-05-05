//wap to find sum and average of array using dma
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, *ptr, sum=0;
    float avg = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    printf("Enter array elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", ptr+i);
    }
    for ( i = 0; i < n; i++){
        sum += *(ptr+i);

    }
    avg = (float)sum / n;
    printf("Sum: %d\tAvg: %f", sum, avg);
    free(ptr);
    return 0;

}