//for question number 1, display result of n numbers of employee
#include <iostream>
using namespace std;
class Employee
{
    private:
    char name[20], address[20], position[20];
    int id;
    long ph;

    public:
    void getDetails(int i);
    void display();
};

void Employee::getDetails(int i)
{
    cout << "Enter details of " << i << " employee" << endl;
    cin >> name >> address >> position >> id >> ph;
}
void Employee::display()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Position: " << position << endl;
    cout << "Id: " << id << endl;
    cout << "Phone number: " << ph << endl;
}

int main()
{
    int i, n;
    Employee e[100];
    cout << "ENter number of employees: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        e[i].getDetails(i+1);
    }
    for (i = 0; i < n; i++)
    {
        e[i].display();
    }
    return 0;
}