//mixed 
#include <iostream>
using namespace std;
class Rational
{
    private:
        int num, denum;
    public:
        Rational();
        Rational(int a, int b);
        void display();
};

Rational::Rational()
{
    num = 100;
    denum = 200;
}
Rational::Rational(int a, int b)
{
    num = a;
    denum = b;
}

void Rational::display()
{
    cout << "Num: " << num << endl;
    cout << "Denum: " << denum << endl;
}

int main()
{
    Rational r1, r2(50, 100);
    r1.display();
    r2.display();
    return 0;
}