//wap to calculate the time required to find fibonacci series using recursive and iterativea algorithm. Also compare time(take n = 40) 
//recursive : o(2^n)
//iterative : o(n) 

//theory: pseudocode for recursive fibonacci, iterative fibonacci, linear search binary search. recurrence relation for recursive, iterative fibonacci
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long recursiveFibonacci(int n) {
    if (n <= 1)
        return n;
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

long long iterativeFibonacci(int n) {
    if (n <= 1) 
        return n;

    long long a=0, b=1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    auto st1 = high_resolution_clock::now();
    cout << "Iterative 40th term: " << iterativeFibonacci(40) << endl;
    auto end1 = high_resolution_clock::now();
    auto timetaken1 = (end1-st1);
    cout << "Iterative time taken: " << timetaken1 << endl;

    auto st2 = high_resolution_clock::now();
    cout << "Recursive 40th term: " << recursiveFibonacci(40) << endl;
    auto end2 = high_resolution_clock::now();
    auto timetaken2 = (end2-st2);
    cout << "Recursive time taken: " << timetaken2 << endl;
    return 0;
}