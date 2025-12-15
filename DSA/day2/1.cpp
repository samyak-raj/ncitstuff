#include <iostream>
using namespace std;

#define max_size 5

template <typename T>
void push(T s[], T item, int& TOS) {
    if (TOS == max_size - 1) {
        cout << "Stack is already full" << endl;
        return;
    }
    TOS++;
    s[TOS] = item;
}

template <typename T>
T pop(T s[], int& TOS) {
    if (TOS == -1) {
        cout << "Stack is empty" << endl;
        return T();
    }
    T item = s[TOS];
    TOS--;
    return item;
}

template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int s[max_size];
    int TOS = -1;

    push(s, 1, TOS);
    push(s, 2, TOS);
    push(s, 3, TOS);
    push(s, 4, TOS);

    // push(s, 'a', TOS);
    // push(s, 'b', TOS);
    // push(s, 'c', TOS);
    // push(s, 'd', TOS);

    cout << "The elements in the stack are: " << endl;
    display(s, TOS);

    cout << "Popped element is: " << pop(s, TOS) << endl;
    return 0;
}