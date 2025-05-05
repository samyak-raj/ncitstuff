#include <iostream>
using namespace std;
void sum(int a, int b){
    int c;
    c = a + b;
    cout << "Sum of a and b: " << c << endl;
}

void sum(int a, float b){
    float c;
    c = a + b;
    cout << "Sum of a and b: " << c << endl;
}

int main(){
    int a, b;
    float c;
    cout << "Enter value of a, b, c: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    sum(a, b);
    sum(a, c);
    return 0;
}