//copy constructor
#include <iostream>
using namespace std;
class Construct
{
    private:
        int a, b;
    public:
        Construct();
        Construct(construct &i);
        void display();
};
Construct::Construct()
{
    a = 10;
    b = 20;
}
Construct::Construct(Construct &i)
{
    a = i.a;
    b = i.b;
}
void Construct::display()
{
    cout << a << endl << b << endl;
}
int main()
{
    Construct obj1;
    Construct obj2(obj1);
    Construct obj3 = obj1;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}