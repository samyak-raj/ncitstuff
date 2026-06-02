//find the maximum and minimum elements of unsorted array using divide and conquer method
#include <iostream>

using namespace std;

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
    if (low == high + 1) {
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
    if (mml.min < mmr.min) minmax.min = mml.min;
    else minmax.min = mmr.min;

    if(mml.max > mmr.max) minmax.max = mml.max;
    else minmax.max = mmr.max;
}

int main() {
    int arr[10] = {20, 13, 15, 3, 2, 6, 17, 1, 9, 11};
    struct Pair mm = getMinMax(arr, 0, 9);
    cout << "Minimum: " << mm.min << endl;
    cout << "Maximum: " << mm.max << endl;
    return 0;
}