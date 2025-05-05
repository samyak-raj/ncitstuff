//overloading constructor example
#include <iostream>
using namespace std;
class Rational
{
    private:
        int num, denum;
    public:
        Rational();
        Rational(int x, int y);
        Rational(Rational &r);
        void display();
};

Rational::Rational()
{
    num = 10;
    denum = 20;
}

Rational::Rational(int x, int y)
{
    num = x;
    denum = y;
}

Rational::Rational(Rational &r)
{
    num = r.num;
    denum = r.denum;
}

void Rational::display()
{
    cout << "Num: " << num << endl;
    cout << "Denum: " << denum << endl;
}

int main()
{
    Rational r1;
    Rational r2(20, 30);
    Rational r3(r2);
    r1.display();
    r2.display();
    r3.display();
    return 0;
}