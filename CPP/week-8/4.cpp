#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class Student {
    private:
        char name[20], address[20];
        int roll , marks;
    public:
        void setInfo() {
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter address: " << endl;
            cin >> address;
            cout << "Enter roll: " << endl;
            cin >> roll;
            cout << "Enter marks: " << endl;
            cin >> marks;
        }
        void showInfo() {
            cout << "Name: " << name << endl;
            cout << "address: " << address<< endl;
            cout << "Roll: " << roll<< endl;
            cout << "Marks: " << marks << endl;
        }

        void compare() {
            if ((strcmp("Pokhara", address) == 0) && (marks > 60)) {
                showInfo();
            }
        }
};


int main() {
    int i, n;
    cout << "Enter how many records; " << endl;
    cin >> n;

    Student s[n];
    fstream file;
    file.open("../student.txt", ios::out);
    for(i = 0; i < n; i++) {
        s[i].setInfo();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();
    cout << endl; 
    file.open("../student.txt", ios::in);
    for (i = 0; i < n; i++) {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].compare();
    }
    return 0;
}