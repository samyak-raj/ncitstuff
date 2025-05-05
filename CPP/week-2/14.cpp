//Defin a class Bank. Calculate SI using default value of rate = 1.5%. Use constructor to initialize the object and appropriate member functions to display and calculate the result
#include <iostream>
using namespace std;
class Bank
{
    private:
        float principal, time, rate, si;
    public:
        Bank(float p, float t, float r = 1.5);
        void calc_si();
        void display();
};

Bank::Bank(float p, float t, float r)
{
    principal = p;
    time = t;
    rate = r;
}

void Bank::calc_si()
{
    si = (principal * time * rate) / 100;
}

void Bank::display()
{
    cout << "Simple Interest: " << si << endl;
}

int main()
{
    Bank b(20000.5, 2.3);
    b.calc_si();
    b.display();
    return 0;
}