#include <iostream>
#include <string.h>
using namespace std;

class Staff {
    protected:
        char name[20];
        int staff_id;

    public:
        Staff() {
            strcpy(name, "");
            staff_id = 0;
        }

        Staff(char n[20], int id) {
            strcpy(name, n);
            staff_id = id;
        }

        void displayStaff() {
            cout << "Staff_id: " << staff_id << endl;
            cout << "Name: " << name << endl;
        }
};

class Lecturer: public Staff {
    private:
        char sub_def[20];

    public:
        Lecturer() {
            strcpy(sub_def, "");
        }
        Lecturer(char n[20], int id, char s[20]) : Staff(n, id) {
            strcpy(sub_def, s);
        }
        void displayLecturer() {
            cout << "Subject definition: " << sub_def << endl;
        }
};

class AdminStaff : public Staff {
    private:
        char post_depart[20];
    public:
        AdminStaff() {
            strcpy(post_depart, "");
        }
        AdminStaff(char n[20], int id, char p[20]) : Staff(n, id) {
            strcpy(post_depart, p);
        }
        
        void displayAdmin() {
            cout << "Post department: " << post_depart << endl;
        }
};

class Librarian : public Staff {
    private:
        char shift[20];
    public:
        Librarian() {
            strcpy(shift, "");
        }
        Librarian(char n[20], int id, char s[20]) : Staff(n, id) {
            strcpy(shift, s);
        }
        void displayLibrarian(){
            cout << "Shift: " << shift << endl;
        }
};

int main() {
    Lecturer le("ram", 1, "OOP");
    AdminStaff a("shyam", 2, "SE");
    Librarian li("sita", 3, "morning");

    le.displayStaff();
    le.displayLecturer();

    a.displayStaff();
    a.displayAdmin();

    li.displayStaff();
    li.displayLibrarian();

    return 0;
}