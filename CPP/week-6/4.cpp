//wap to compare two strings
#include <iostream>
#include <string.h>
using namespace std;
class String1{
    private:
        char name[20];
    public:
        String1() {
            strcpy(name, "");
        }
        String1(char s[20]) {
            strcpy(name, s);
        }
        void display(){
            cout << "String is: " << name << endl;
        }
        friend void operator ==(String1 &x, String1 &y);
};

void operator ==(String1 &x, String1&y) {
    if (strcmp(x.name, y.name) == 0) {
        cout << "String are same" << endl;
    } else {
        cout << "String are different" << endl;
    }
}
int main() {
    String1 s1("SRS"), s2("RSR");
    s1.display();
    s2.display();
    s1 == s2;
    return 0;
}
