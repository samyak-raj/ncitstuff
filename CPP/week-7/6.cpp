//file handling
//using modes
//if per >=60 

#include <iostream>
#include <fstream>
using namespace std;
class Student {
    private:
        float per;
        int marks;
        char name[20];
    public:
        void setInfo() {
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter marks: " << endl;
            cin >> marks;
            cout << "Enter percentage: " << endl;
            cin >> per;
        }    
        void showInfo() {
            cout << "name: " << name <<  endl;
            cout << "marks: " << marks <<  endl;
            cout << "percentage: " << per << endl;
        }
        void compare() {
            if (per >= 60) {
                showInfo();
            }
        }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    fstream file;
    file.open("../test3.txt", ios::out);
    for (int i = 0; i < n; i++) {
        s[i].setInfo();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();

    file.open("../test3.txt", ios::in);
    for ( int i = 0; i < n; i++) {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].compare();
    }
    file.close();
    return 0;
}