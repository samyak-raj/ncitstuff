//reference variable
#include <iostream>
using namespace std;
int main()
{
    float total = 100;
    float &sum = total;
    cout << total << "\t" << sum << endl;
    total = total + 10;
    cout << "..........." << endl;
    cout << total << "\t" << sum << endl;
    return 0;
}
