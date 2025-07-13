//exception handling
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<< "Enter two numbers: " << endl;
    cin >> a >> b;
    try {
        if (b!= 0) {
            cout << "The division of a and b is " << a / b << endl;
        }
        else {
            throw(b);
        }
    } 
    catch (int e) {
        cout << "Exception caught: divide by zero error: " << e;
    }
    return 0;
}
