#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
// Linear search implementation
int linear_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Binary search implementation
int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, key, i;
    int arr[100000];

    cout << "Enter number of elements: ";
    cin >> n;

    /* Generate sorted array automatically */
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    /* Search last element for worst case */
    key = n;

    /* Repeat many times to get visible timing */
    auto start = high_resolution_clock::now();

    for (i = 0; i < 100000; i++) {
        linear_search(arr, n, key);
    }

    auto end = high_resolution_clock::now();

    auto linear_time = duration<double>(end - start).count();

    /* Binary search timing */
    start = high_resolution_clock::now();

    for (i = 0; i < 100000; i++) {
        binary_search(arr, n, key);
    }

    end = high_resolution_clock::now();
    auto binary_time = duration<double>(end - start).count();

    cout << "Linear search time = " << linear_time << " seconds\n";
    cout << "Binary search time = " << binary_time << " seconds\n";

    return 0;
}