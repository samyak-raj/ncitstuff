//create a class employee with attributes employee name, address, position, employee id, phone number. Use appropriate method for input and output. Create three object and display result

#include <iostream>
using namespace std;
//defining member functions outside the class
class Employee
{
    private:
    char name[20], address[20], position[20];
    int id, ph;

    public:
    void getDetails();
    void display();
};

void Employee::getDetails()
{
    cout << "Enter details: " << endl;
    cin >> name >> address >> position >> id >> ph;
}

void Employee::display()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Position: " << position << endl;
    cout << "Employee id: " << id << endl;
    cout << "Phone number: " << ph << endl;
}

int main()
{
    Employee e1, e2, e3;
    cout << "Enter details for Employee 1:" << endl;
    e1.getDetails();
    e1.display();

    cout << "Enter details for Employee 2:" << endl;
    e2.getDetails();
    e2.display();

    cout << "Enter details for Employee 3:" << endl;
    e3.getDetails();
    e3.display();
    return 0;
}
