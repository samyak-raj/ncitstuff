#include <iostream>
using namespace std;
class Sample {
    private:
        int a;
    public:
        Sample() {
            a = 0;
        }
        Sample(int x) {
            a = x;
        }

        Sample operator +(Sample &o) {
            Sample temp;
            temp.a = a + o.a;
            return temp;
        }
        void display() {
            cout << "a: " << a << endl;
        }
};

int main() {
    Sample obj1(10), obj2(20), obj3(30), obj4;
    obj4 = obj1 + obj2 + obj3;
    obj4.display();
    return 0;
}