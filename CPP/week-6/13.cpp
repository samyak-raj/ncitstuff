//polar to rectangle
//using constructor
#include <iostream>
#include <cmath>
using namespace std;
class Polar {
    private:
        float radius, angle;
    public:
        Polar(){
            radius = 0;
            angle = 0;
        }
        Polar(float r, float a) {
            radius = r;
            angle = a;
        }
        void display() {
            cout << "Radius: " << radius << endl;
            cout << "Angle: " << angle << endl;
        }
        float getRadius(){
            return radius;
        }
        float getAngle(){
            return angle;
        }
};

class Rectangle {
    private:
        int x, y;
    public:
        Rectangle() {
            x = 0;
            y = 0;
        } 
        Rectangle(Polar p) {
            x = p.getRadius() * cos(p.getAngle());
            y = p.getRadius() * sin(p.getAngle());
        }
        void display() {
            cout << "x-coodinate: " << x << endl;
            cout << "y-coodinate: " << y << endl;
        }
};

int main() {
    Polar p(5, 90);
    Rectangle r;
    r = p;
    r.display();
    p.display();
    return 0;
}