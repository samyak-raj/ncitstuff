//default arguments
//wap to calculate si using default value of r = 1.5. Ask the user for principal amount and time
#include <iostream>
using namespace std;
double si(double p, double t, double r = 1.5)
{
    return (p * t * r) / 100;
}

int main()
{
    float p, t;
    cout << "Enter principal amount and time: " << endl;
    cin >> p >> t;
    cout << "S.I.: " << si(p, t) << endl;
    return 0;
}