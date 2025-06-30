//wap tot concatenate two strings using operator overloading
#include <iostream>
#include <string.h>
using namespace std;
class String1 {
    private:
        char name[20];
    public: 
        String1(){
           strcpy(name, ""); 
        }
        String1(char s[20]) {
            strcpy(name, s);
        }
        void display() {
            cout << "The string is " << name << endl;
        }
        friend String1 operator +(String1 &a, String1 &b);
};

String1 operator +(String1 &a, String1 &b) 
{
    String1 temp;
    strcpy(temp.name, a.name);
    strcat(temp.name, b.name);
    return temp;
}
int main() {
    String1 s1("SRS"), s2("RSR"), s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}