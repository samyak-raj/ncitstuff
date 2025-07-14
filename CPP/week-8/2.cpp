#include <iostream>
#include <string.h>
using namespace std;

class Person {
protected:
    char name[20];
    int code;
public:
    Person(char n[20], int c) {
        strcpy(name, n);
        code = c;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
};

class Account : virtual public Person {
protected:
    int salary;
public:
    Account(char n[20], int c, int s) : Person(n, c) {
        salary = s;
    }
    void displayAccount() {
        cout << "Salary: " << salary << endl;
    }
};

class Admin : virtual public Person {
protected:
    int year;
public:
    Admin(char n[20], int c, int y) : Person(n, c) {
        year = y;
    }
    void displayAdmin() {
        cout << "Year: " << year << endl;
    }
};

class Record : public Account, public Admin {
private:
    int record;
public:
    Record(char n[20], int c, int s, int y, int r) : Person(n, c), Account(n, c, s), Admin(n, c, y) {
        record = r;
    }
    void displayRecord() {
        cout << "Record: " << record << endl;
    }
};

int main() {
    Record r("SRS", 1234, 69000, 2025, 69);
    r.displayPerson();
    r.displayAccount();
    r.displayAdmin();
    r.displayRecord();
    return 0;
}