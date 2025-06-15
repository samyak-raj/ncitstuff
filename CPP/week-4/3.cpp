//multilevel inheritance
#include <iostream>
using namespace std;
class Student 
{
    protected:
        int rollNumber;
    public:
        void inputDetails()
        {
            cout << "Enter roll number: " << endl;
            cin >> rollNumber;
        }
        void displayDetails()
        {
            cout << "Roll Number: " << rollNumber << endl;
        }
};

class Examination : public Student 
{
    protected: 
        int sub1, sub2;
    public:
        void setMarks()
        {
            cout << "Enter sub1 and sub2: " << endl;
            cin >> sub1 >> sub2;
        }
        void displayMarks()
        {
            cout << "Sub1: " << sub1 << endl << "Sub2: " << sub2 << endl;
        }
};

class Result : public Examination
{
    private:
        int total;
    public:
        void displayResult()
        {
            int total = sub1 + sub2;
            cout << "Total: " << total << endl;
        }
};

int main()
{
    Result obj;
    obj.inputDetails();
    obj.displayDetails();
    obj.setMarks();
    obj.displayMarks();
    obj.displayResult();
    return 0;
}