//single inheritance
#include <iostream>
using namespace std;
class Person 
{
    protected:
        char name[20], address[20];
    public:
        void input()
        {
            cout << "Enter name and address: " << endl;
            cin >> name >>  address;
        }
        void display()
        {
            cout << "Name: " << name << endl << "Address: " << address<< endl;
        }
};

class Student: public Person 
{
    private:
        int age, roll;
    public:
        void set()
        {
            cout << "Enter age and roll: " << endl;
            cin >> age >> roll;
        }
        void show()
        {
            cout << "Age: " << age << endl << "Roll: " << roll << endl;
        }
};

int main()
{
    Student obj;
    obj.input();
    obj.display();
    obj.set();
    obj.show();
    return 0;
}