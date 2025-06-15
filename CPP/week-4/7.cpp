//diamond problem
#include <iostream>
using namespace std;
class Student 
{
    protected:
        char name[20], address[20];
    public:
        void getData()
        {
            cout << "Enter name and address: " << endl;
            cin >> name >> address;

        }
        void displayData()
        {
            cout << "Name: " << name << endl << "Address: " << address << endl;
        }
};

class Marks : virtual public Student 
{
    protected:
        int sub1, sub2;
    public:
        void getMarks()
        {
            cout << "Enter sub1, sub2: " << endl;
            cin >> sub1 >> sub2;
        }    
        void displayMarks()
        {
            cout << "Sub1: " << sub1 << endl << "Sub2: " << sub2 << endl;
        }
};

class Sports : virtual public Student 
{
    protected:
        int score;
    public:
        void getSport()
        {
            cout << "Enter score: " << endl;
            cin >> score;
        }
        void displaySport()
        {
            cout << "Score: " << score << endl;
        }
};

class Result : public Marks, public Sports
{
    private:
        int total;
    public:
        void display()
        {
            total = sub1 + sub2 + score;
            cout << "Total: " << total << endl;
        }
};

int main()
{
    Result r;
    r.getData();
    r.getMarks();
    r.getSport();
    r.displayData();
    r.displayMarks();
    r.displaySport();
    r.display();
    return 0;
}