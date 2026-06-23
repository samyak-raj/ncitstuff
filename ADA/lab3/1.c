#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

int kthSmallest(int arr[], int low, int high, int k) {
    if (low <= high) {
        int p = partition(arr, low, high);
        int rank = p - low + 1;
        if (rank == k) return arr[p];
        else if(k < rank) return kthSmallest(arr, low, p-1, k);
        else return kthSmallest(arr, p+1, high, k - rank);
    }
    return -1;
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 26, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }
    int result = kthSmallest(arr, 0, n-1, k);
    printf("%dth minimum element = %d\n", k, result);
    return 0;
}