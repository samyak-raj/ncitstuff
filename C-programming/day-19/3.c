//wap to search an element in array using dma
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, *ptr, key, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n, sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", ptr + i);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++){
        if (*(ptr+i) == key){
            printf("The element %d is found at position %d", key, i);
            found = 1;
            break;
        }
    }
    if (found != 1){
        printf("The element %d not found in array", key);
    }
    free(ptr);
    return 0;
}       