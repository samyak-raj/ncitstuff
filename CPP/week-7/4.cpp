//file handling
//using modes
#include <iostream>
#include <fstream>
using namespace std;
class Student {
    private:
        int roll;
        char name[10];
    public:
        void setInfo(){
            cout << "Enter roll: " << endl;
            cin >> roll;
            cout << "Enter name: " << endl;
            cin >> name;
        }
        void showInfo() {
            cout << "Roll: " << roll << endl;
            cout << "Name: " << name << endl;
        }
};

int main() {
    Student s[3];
    fstream file;
    file.open("../test1.txt", ios::out);
    for (int i= 0; i < 3; i++) {
        s[i].setInfo();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();

    file.open("../test1.txt", ios::in);
    for (int i = 0; i < 3; i++) {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].showInfo();
    }
    file.close();
    return 0;
}