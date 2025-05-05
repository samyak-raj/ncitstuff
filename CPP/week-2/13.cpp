//constructor with default argument
#include <iostream>
using namespace std;
class Rational
{
    private:
        int num, denum;
    public:
        Rational(int x, int y = 50);
        void display();
};

Rational::Rational(int x, int y)
{
    num = x;
    denum = y;
}

void Rational::display()
{
    cout << "Num: " << num << endl;
    cout << "Denum: " << denum << endl;
}

int main()
{
    Rational r1(10);
    Rational r2(20 , 30);
    r1.display();
    r2.display();
    return 0;
}