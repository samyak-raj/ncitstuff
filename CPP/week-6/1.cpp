//wap to add two complex numbers using operator overloading
#include <iostream>
using namespace std;
class Complex {
    private:
        int real, img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int a, int b){
            real = a;
            img = b;
        }
        void display() {
            cout << "Real: " << real << endl << "Img: " << img << endl;
        }
        Complex operator +(Complex &c) {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};

int main() {
    Complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}