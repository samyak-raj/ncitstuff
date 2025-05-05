#include <iostream>
using namespace std;
//creating class Student
class Student
{
    //data should be kept in private for security
    private:
    int roll, marks;
    char name[20];

    //functions should be made public for accessing the data 
    public:
    void getDetails();
    void display();
};
//defining class functions outside the class
void Student::getDetails()
{
    cout << "Enter name, marks and roll: " << endl;
    cin >> name >> marks >> roll;
}

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Roll: " << roll << endl;
}

int main()
{
    Student s;
    s.getDetails();
    s.display();
    return 0;
}