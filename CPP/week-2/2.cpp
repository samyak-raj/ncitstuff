//inline function
#include <iostream>
using namespace std;

inline int volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    int l, b, h;
    cout << "Enter length, breadth, height: " << endl;
    cin >> l >> b >> h;
    cout << "Volume: " << volume(l, b, h);
    return 0;
}