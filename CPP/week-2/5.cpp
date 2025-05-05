//function overloading
//wap to find the volume of 3 objects: cube, cylinder, rectangular box using same function name volume
#include <iostream>
using namespace std;
float volume(float l)
{
    return (l * l * l);
}
float volume(float l, float b, float h)
{
    return (l * b * h);
}
float volume(float r, int l, float pi = 3.14)
{
    return (pi * r * r * l);
}

int main()
{
    cout << "Volume of cube: " << volume(5.5F) << endl;
    cout << "Volume of rectangle: " << volume(2.2F, 3.3F, 4.4F) << endl;
    cout << "Volume of cylinder: " << volume(7.2F, 10) << endl;
    return 0;
}