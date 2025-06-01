#include <iostream>
using namespace std;
class Parent 
{
    protected:
        char name[20], address[20];
    public:
        void input()
        {
            cout << "Enter name and address: " << endl;
            cin >> name >> address;
        }
        void output()
        {
            cout << "Name: " << name << endl << "Address: " << address << endl;
        }
};

class Child:public Parent
{
    private:
        int roll, age;
    public:
        void set()
        {
            cout << "Enter roll and age: " << endl;
            cin >> roll >> age;
        }
        void show() 
        {
            cout << "Roll: " << roll << endl << "Age: " << age << endl;
        }
};

int main() 
{
    Child obj;
    obj.input();
    obj.output();
    obj.set();
    obj.show();
    return 0;
}