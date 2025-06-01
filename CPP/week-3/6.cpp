#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
    private:
        char *p;
    public:
        Demo()
        {
            p = new char[1];
            strcpy(p, "");
        }
        Demo(char *s)
        {
            p = new char[strlen(s) + 1];
            strcpy(p, s);
        }
        ~Demo()
        {
            delete[] p;
        }
        void display()
        {
            cout << "Name: " << p << endl;
        }
};

int main()
{
    Demo obj1("S R S"), obj2("Ram");
    obj1.display();
    obj2.display();
    return 0;
}