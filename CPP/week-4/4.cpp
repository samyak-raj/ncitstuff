//hiearchical inheritance
#include <iostream>
using namespace std;
class Person 
{
    protected:
        char name[20];
        int age;
    public:
        void setPerson()
        {
            cout << "Enter name and age: " << endl;
            cin >> name >> age;
        }
        void displayPerson()
        {
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

class Student : public Person 
{
    private: 
        int roll, marks;
    public:
        void setStudent()
        {
            cout << "Enter roll and marks: " << endl;
            cin>> roll >> marks;
        }
        void displayStudent()
        {
            cout << "Roll: " << roll << endl << "Marks: " << marks << endl;
        }
};

class Employee : public Person 
{
    private: 
        int employeeid, salary;
    public:
        void setEmployee()
        {
            cout << "Enter employee id and salary: " << endl;
            cin >> employeeid >> salary;
        }
        void displayEmployee()
        {
            cout << "Employee Id: " << employeeid << endl << "Salary: " << salary << endl;
        }
};

int main()
{
    Student s;
    s.setPerson();
    s.displayPerson();
    s.setStudent();
    s.displayStudent();

    Employee e;
    e.setPerson();
    e.displayPerson();
    e.setEmployee();
    e.displayEmployee();
    return 0;
}