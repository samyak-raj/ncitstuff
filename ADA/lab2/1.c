//find the maximum and minimum elements of unsorted array using divide and conquer method
#include <stdio.h>
#include <stdlib.h>

struct Pair {
    int min, max;
};

struct Pair getMinMax(int A[], int low, int high) {
    struct Pair minmax, mml, mmr;
    if (low == high) {
        minmax.min = A[low];
        minmax.max = A[low];
        return minmax;
    }
    if (low + 1 == high) {
        if (A[low] < A[high]) {
            minmax.min = A[low];
            minmax.max = A[high];
        } else {
            minmax.min = A[high];
            minmax.max = A[low];
        }
        return minmax;
    }
    int mid = (low + high) / 2;
    mml = getMinMax(A, low, mid);
    mmr = getMinMax(A, mid+1, high);
    if (mml.min < mmr.min) {
        minmax.min = mml.min;
    } else {
        minmax.min = mmr.min;
    }

    if(mml.max > mmr.max) {
        minmax.max = mml.max;
    } else {
        minmax.max = mmr.max;
    }

    return minmax;
}

int main() {
    int arr[1000];
    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 1000;
    }
    for (int i = 0; i < 1000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    struct Pair mm = getMinMax(arr, 0, 999);
    printf("Minimum: %d\n", mm.min);
    printf("Maximum: %d\n", mm.max);
    return 0;
}