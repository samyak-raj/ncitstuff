#include <iostream>
using namespace std;
class Base 
{
    public:
        Base()
        {
            cout << "Base constructor is called" << endl;
        }
        ~Base()
        {
            cout << "Base descrutor is called" << endl;
        }
};

class Child : public Base 
{
    public:
       Child()
       {
        cout << "Child constructor is called" << endl;
       } 
       ~Child()
       {
        cout << "Child destructor is called" << endl;
       }
};

int main()
{
    Child c;
    return 0;
}