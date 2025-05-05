#include <iostream>
using namespace std;

void sum(int a, int b){
    int c;
    c = a + b;
    cout << "Sum of a and b: " << c << endl;
}

void sum(int a, int b, int c){
    int d;
    d = a + b + c;
    cout << "Sum of a, b and c: " << d << endl;
}

int main(){
    int a, b, c;
    cout << "Enter value of a, b, c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    sum(a, b);
    sum(a, b, c);
    return 0;
}
