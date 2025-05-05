//create a class student with data members name of student, roll no, phone num. Use concept of parameterized constructor to initialize data
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    private:
        char name[20];
        int roll;
        long long ph;
    
    public:
        Student(char n[20], int r, long long p);
        void display();
};

Student::Student(char n[20], int r, long long p)
{
    strcpy(name, n);
    roll = r;
    ph = p;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Phone num: " << ph << endl;
}

int main()
{
    Student s("SRS", 12, 9841123123);
    s.display();
    return 0;
}