#include <iostream>
using namespace std;
class Numbers 
{
    private:
        int *a, *b, sum; 
    public:
        Numbers()
        {
            a = new int;
            b = new int; 
            *a = 10; 
            *b = 20;
        }
        Numbers(int x, int y)
        {
            a = new int;
            b = new int; 
            *a = x;
            *b = y;
        }
        ~Numbers()
        {
            delete a;
            delete b;
        }
        void add()
        {
            sum = *a + *b;
        }
        void display()
        {
            cout << "Sum: " << sum << endl;
        }
};

int main()
{
    Numbers obj1, obj2(20, 30);
    obj1.add();
    obj2.add();
    obj1.display();
    obj2.display();
    return 0; 
}