//parameterized constructor
#include <iostream>
using namespace std;
class Construct
{
    private:
        int num, denum;
    public: 
        Construct(int a, int b);
        void display();
};

Construct::Construct(int a, int b)
{
    num = a;
    denum = b;
}

void Construct::display()
{
    cout << "num = " << num << endl;
    cout << "denum = " << denum << endl;
}

int main()
{
    Construct obj(5, 10);
    obj.display();
    return 0;
}