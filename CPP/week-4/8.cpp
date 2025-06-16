//function overriding
#include <iostream>
using namespace std;

class A 
{
    public:
        void display()
        {
            cout << "This is method of base class." << endl;
        }
};

class B : public A 
{
    public:
        void display()
        {
            cout << "This is method of derived class." << endl;
        }
};

int main()
{
    B obj;
    obj.display();
    return 0;
}