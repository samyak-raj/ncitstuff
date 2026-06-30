#include <stdio.h>
#include <stdlib.h>

struct Job {
    char id;
    int deadline, profit;
};

void swap(struct Job *a, struct Job *b) {
    struct Job temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct Job A[], int low, int high){
    int pivot = A[high].profit; 
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (A[j].profit >= pivot) { 
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return (i + 1);
}

void quickSort(struct Job A[], int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);
        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

void jobSequencing(struct Job A[], int n){
    int result[n], slot[n];
    int i, j, totalProfit=0;
    quickSort(A, 0, n-1);
    
    for (i = 0; i < n; i++) {
        slot[i]=0;
    }
    //assign job to slot
    for(i = 0; i < n; i++){
        int last = (A[i].deadline < n) ? A[i].deadline : n;
        for (j = last-1; j >=0; j--) {
            if (slot[j] == 0) {
                result[j] = i;
                slot[j] = 1;
                break;
            }
        }
    }
    printf("Selected job sequence: \n");
    for (i = 0; i < n; i++) {
        if (slot[i]){
            printf("%c ", A[result[i]].id);
            totalProfit += A[result[i]].profit;
        }
    }
    printf("\ntotal profit=%d\n", totalProfit);
}

int main() {
    struct Job A[] = {{'A', 2, 190}, {'B', 1, 19}, {'C', 2, 29}, {'D', 1, 14}, {'E', 3, 15}};
    int n = sizeof(A)/sizeof(A[0]);
    jobSequencing(A, n);
    return 0;
}