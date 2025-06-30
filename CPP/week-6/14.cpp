#include <iostream>
#include <cmath>
using namespace std;
class Rectangle {
    private:
        int x, y;
    public:
        Rectangle(){
            x = 0;
            y = 0;
        }
        Rectangle(int a, int b){
            x = a;
            y = b;
        }
        displayRectangle(){
            cout << "x: " << x << endl << "y: " << y << endl;
        }

};
class Polar {
    private:
        float radius, angle;
    public:
        Polar() {
            radius = 0;
            angle = 0;
        }
        Polar(float r, float a) {
            radius = r;
            angle = a;
        }
        void displayPolar() {
            cout << "Radius: " << radius << endl << "Angle: " << angle << endl;
        }
        operator Rectangle() {
            int a, b;
            a = radius * cos(angle);
            b = radius * sin(angle);
            Rectangle r(a, b);
            return r;
        }
};
int main() {
    Polar p(5, 0.8);
    Rectangle r;
    r = p;
    r.displayRectangle();
    p.displayPolar();
    return 0;
}