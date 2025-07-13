//exception handling
//multiple catch blocks
#include <iostream>
using namespace std;
void test(int x) {
    try {
        if (x == 1) {
            throw(1);
        }
        if (x == 0) {
            throw('A');
        }
        if (x == -1) {
            throw(1.1);
        }
    }
    catch (int a) {
        cout << "Caught integer: " << a << endl;
    }
    catch(char b) {
        cout << "Caught character: " << b << endl;
    }
    catch(double c) {
        cout << "Caught float: " << c << endl;
    }
}

int main() {
    test(1);
    test(0);
    test(-1);
    return 0;
}