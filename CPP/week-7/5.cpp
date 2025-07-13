//file handling
//using modes
//show info of whose address is pokhara

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Student {
    private:
        int roll;
        char name[20], address[20];
    public:
        void setInfo(){
            cout << "Enter roll: " << endl;
            cin >> roll;
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter address: " << endl;
            cin >> address;
        }
        void showInfo() {
            cout << "roll: " << roll <<  endl;
            cout << "name: " << name <<  endl;
            cout << "address: " << address << endl;
        }
        void compare() {
            if (strcmp("pokhara", address) == 0 ) {
                showInfo();
            }
        }
}; 

int main() {
    Student s[3];
    fstream file;
    file.open("../test2.txt", ios::out);
    for(int i = 0; i < 3; i++) {
        s[i].setInfo();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();

    file.open("../test2.txt", ios::in);
    for(int i = 0; i < 3; i++) {
        file.read((char *)&s[i], sizeof(s[i]));
        s[i].compare();
    }
    file.close();
    return 0;
}

