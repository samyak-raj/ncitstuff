//virtual destructor
//Problem code
#include <iostream>
using namespace std;

class Base
{
    public:
        Base() 
        {
            cout << "Constructing the base." << endl;
        }

        ~Base() 
        {
            cout << "Destructing the base." << endl;
        }
};

class Derived : public Base 
{
    public:
        Derived()
        {
            cout <<"Constructing the derived." << endl;
        }

        ~Derived()
        {
            cout << "Destructing the derived." << endl;
        }
};

int main()
{
    Base *ptr = new Derived(); // early binding
    delete ptr;
    return 0;
}
