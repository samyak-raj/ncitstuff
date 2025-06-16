//constructor in derived class
#include <iostream>
using namespace std;
class Alpha 
{
    protected:
        int a;
    public:
        Alpha(int i)
        {
            a = i;
            cout << "Alpha initialized to " << a << endl;
        }
        void displayAlpha()
        {
            cout << "Alpha is " << a << endl;

        }
};

class Beta : public Alpha
{
    private:
        int b;
    public:
        Beta(int i , int j) : Alpha(i)
        {
            b = j;
            cout << "Beta initialized to " << b << endl;
        }
        void displayBeta()
        {
            cout << "Beta is " << b << endl;
        }
};
int main()
{
    Beta b(10, 20);
    b.displayAlpha();
    b.displayBeta();
    return 0;
}