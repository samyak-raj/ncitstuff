//default arguments
#include <iostream>
using namespace std;
void add(int a = 10, int b = 20, int c = 30)
{
    cout << "Addition: " << a + b + c << endl;
}

int main()
{
    add();
    add(1);
    add(1, 2);
    add(1, 2, 3);
    return 0;
}