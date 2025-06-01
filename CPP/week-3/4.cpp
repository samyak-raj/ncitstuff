#include <iostream>
using namespace std;
class Demo 
{
    private:
        int *a;
    public:
        Demo()
        {
            a = new int;
            *a = 10;
        }
        Demo(int x)
        {
            a = new int;
            *a = x+1;
        }
        void display()
        {
            cout << "a: " << *a << endl;
        }
        ~Demo()
        {
            delete a;
        }
};

int main()
{
    Demo obj1, obj2(20);
    obj1.display();
    obj2.display();
    return  0;

}