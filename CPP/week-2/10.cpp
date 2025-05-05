//calculate area of rectangle by using default and parameterised constructor
#include <iostream>
using namespace std;
class Rectangle 
{
    private:
        int l, b, area;
    public:
        Rectangle();
        Rectangle(int a, int b);
        void calc_area();
        void display();
};

Rectangle::Rectangle()
{
    l = 5;
    b = 10;
}

Rectangle::Rectangle(int x, int y)
{
    l = x;
    b = y;
}

void Rectangle::calc_area()
{
    area = l * b;
}
void Rectangle::display()
{
    cout << "Area: " << area << endl;
}
int main()
{
    Rectangle r1, r2(10, 2);
    r1.calc_area();
    r1.display();
    r2.calc_area();
    r2.display();
    return 0;
}
