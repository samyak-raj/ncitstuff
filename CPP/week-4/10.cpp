//constructor in derived class
#include <iostream>
using namespace std;
 
class Alpha 
{
    protected:
        int x;
    public:
        Alpha(int i)
        {
            x = i;
            cout << "Alpha is initialized" << endl;
        }
        void displayAlpha()
        {
            cout << "Alpha is " << x << endl;

        }
};

class Beta 
{
    protected:
        int y;
    public:
        Beta(int j)
        {
            y = j;
            cout << "Beta is initialized" << endl;
        }
        void displayBeta()
        {
            cout << "Beta is " << y << endl;
        }
};

class Gamma : public Alpha, public Beta
{
    private:
        int m, n;
    public: 
        Gamma(int a, int b, int c, int d) : Alpha(a), Beta(b)
        {
            m = c;
            n = d;
            cout << "Gamma is initialized" << endl;
        }
        void displayGamma()
        {
            cout << "m is " << m << endl << "n is " << n << endl;
        }
};

int main()
{
    Gamma obj(10, 20, 30, 40);
    obj.displayAlpha();
    obj.displayBeta();
    obj.displayGamma();
    return 0;
}