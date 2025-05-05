//default constructor
//wap to define a class rational. Use constructor to initialize valus of data members of object(i.e num and denum) and display the num and denum. Use appropriate member functions required
#include <iostream>
using namespace std;
class Construct
{
    private:
        int num, denum;
    public:
        Construct();
        void display();
};

Construct::Construct()
{
    num = 10;
    denum = 20;
}

void Construct::display()
{
    cout << "Num = " << num << endl;
    cout << "Denum = " << denum << endl;
}

int main()
{
    Construct obj;
    obj.display();
    return 0;
}