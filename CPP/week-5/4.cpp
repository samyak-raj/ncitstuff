//has a relationship
#include <iostream>
using namespace std;
class Information
{
    private:
        int roll, sem;
    public:
        void getData()
        {
            cout << "Enter roll num and sem: " << endl;
            cin >> roll >> sem;
        }
        void putData()
        {
            cout << "Roll num: " << roll << endl << "sem: " << sem << endl;
        }
};

class Student : public Information
{
    private:
        char name[20], address[20];
        Information i;
    public:
        void input()
        {
            i.getData();
            cout << "Enter name and address: " << endl;
            cin >> name >> address;            
        }
        void output()
        {
            i.putData();
            cout << "Name: " << name << endl << "Address: " << address << endl;
        }
};

int main()
{
    Student student;
    student.input();
    student.output();
    return 0;
}