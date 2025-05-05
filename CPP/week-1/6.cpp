#include <iostream>
using namespace std;
//creating class Student
class Student
{
    //data should be kept in private for data security
    private:
    int marks;
    int roll;
    char name[20];

    //functions should be kept in public for accessing data
    public:
    void getDetails()
    {
        cout << "Enter details: " << endl;
        cin >> name >> marks >> roll;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    Student s;
    s.getDetails();
    s.display();
    return 0;
}