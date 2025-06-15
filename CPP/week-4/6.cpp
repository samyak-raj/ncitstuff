//ambiguity problem
#include <iostream>
using namespace std;
class A
{
    public:
        void show()
        {
            cout << "Function of class A " << endl;
        }
};

class B 
{
    public:
        void show()
        {
            cout << "Function of class B " << endl;
        }
};

class Child : public A, public B 
{
    public:
        void display()
        {
            cout << "Function of child class " << endl;
        }
};

int main()
{
    Child obj;
    obj.A::show();
    obj.B::show();
    obj.display();
    return 0;
}