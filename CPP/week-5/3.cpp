// has a relationship

#include <iostream>
using namespace std;

class Engine
{
    public:
        void startEngine()
        {
            cout << "Engine started" << endl;
        }
};

class Car 
{
    private:
        Engine e;
    public:
        void startCar()
        {
            e.startEngine();
            cout << "The car is moving" << endl;
        }
};

int main()
{
    Car car;
    car.startCar();
    return 0;
}