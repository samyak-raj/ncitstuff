//insertion at specified position 
//deletion from specified position
#include <iostream>
using namespace std;

void insert(int n, int index, int arr[], int size) {
    for (int i = size; i >= index; i--) {
        //right shift
        arr[i + 1] = arr[i];
    }

    arr[index] = n;
}

void deletion(int index, int arr[], int size) {
    for (int i = index; i < size; i++) {
        //left shift
        arr[i] = arr[i + 1];
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int size = 6;  
    int arr[size] = {10, 20, 30, 40, 50, 60};

    cout << "before insertion: " << endl;
    display(arr, size);
    
    //inserting 25 into the arrayy at index 2
    insert(25, 2, arr, size);
    
    cout << "after insertion: " << endl;
    display(arr, size);

    //deleting the value at index 3
    deletion(3, arr, size);
    
    cout << "after deletion: " << endl;
    display(arr, size); 
    return 0;
}