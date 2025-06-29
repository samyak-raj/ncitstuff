//wap to overload += operator for height h1 += h2
#include <iostream>
using namespace std;
class Height {
    private:
        int feet, inches;
    public:
        Height() {
            feet = 0;
            inches = 0;
        }
        Height(int a, int b) {
            feet = a;
            inches = b;
        }
        void display() {
            cout << "Feet: " << feet << endl << "Inches: " << inches << endl;
        }
        void operator +=(Height &h) {
            feet += h.feet;
            inches += h.inches;
            if (inches > 12) {
                feet += inches / 12;
                inches += inches % 12;
            }
        }
};
int main() {
    Height h1(3, 12), h2(2, 3);
    h1 += h2;
    cout << "Resultign height: " << endl;
    h1.display();
    return 0;
}