//operator overloading with friend function
#include <iostream>
using namespace std;
class Sample
{
    private:
        int x, y, z;
    public:
        void getData(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void display()
        {
            cout << x << endl << y << endl << z;
        }
        friend void operator -(Sample &temp); 
};

void operator -(Sample &temp)
{
    temp.x = -temp.x;
    temp.y = -temp.y;
    temp.z = -temp.z;
}

int main()
{
    Sample s;
    s.getData(1, 2, 3);
    s.display();
    -s;
    cout << "after operator overloading" << endl;
    s.display();
    return 0;
}