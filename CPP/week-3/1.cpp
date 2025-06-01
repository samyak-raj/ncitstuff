#include <iostream>
using namespace std;

class One 
{
    protected:
        int a;
    public:
        void input();
        void output();
};

void One::input()
{
    cout << "Enter a: " << endl;
    cin >> a;
}

void One::output()
{
    cout << "a: " << a << endl;
}

class Two:public One 
{
    private:
        int b;
    public:
        void set();
        void show();
};

void Two::set()
{
    cout << "Enter b: " << endl;
    cin >> b;
}

void Two::show()
{
    cout << "b: " << b << endl;
}

int main() 
{
    Two obj;
    obj.input();
    obj.output();
    obj.set();
    obj.show();
    return 0;
}