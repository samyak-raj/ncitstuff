//fractional knapsack
#include <stdio.h>
#include <stdlib.h>
struct Item {
    float weight, value, ratio;
};
void swap(struct Item *a, struct Item *b) {
    struct Item temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct Item arr[], int low, int high) {
    float pivot = arr[high].ratio;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        //sorting in descending ratio
        if (arr[j].ratio >= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(struct Item arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }    
}

int main() {
    int n = 7;
    float capacity = 15.0;
    float totalvalue = 0;
    int i;
    struct Item *items = (struct Item *)malloc(n*sizeof(struct Item));
    if (items == NULL) {
        printf("memory allocation failed\n");
        return 1;
    } 
    float values[] = {10, 5, 15, 7, 6, 18, 3};
    float weights[] = {2, 3, 5, 7, 1, 4, 1};
    for (i = 0; i < n; i++) {
        items[i].value = values[i];
        items[i].weight = weights[i];
        items[i].ratio = items[i].value/items[i].weight;
    }

    quickSort(items, 0, n-1);
    //greedy selection
    for (i = 0; i < n; i++) {
        if (capacity==0)break;
        if (items[i].weight <= capacity) {
            capacity -= items[i].weight;
            totalvalue += items[i].value;
            printf("Taken whole item, value=%.2f, weight=%.2f, ratio=%.2f\n", items[i].value, items[i].weight, items[i].ratio);
        } else {
            float fraction = capacity/items[i].weight;
            totalvalue += items[i].value * fraction;
            printf("Taken %.2f %%of item, value=%.2f, weight=%.2f, ratio=%.2f\n", fraction*100, items[i].value*fraction, items[i].weight*fraction, items[i].ratio);
            capacity = 0;
        }
    }
    printf("maximum profit = %.2f\n", totalvalue);
    free(items);
    return 0;
}