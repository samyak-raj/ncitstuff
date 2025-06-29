//operator overloading
#include <iostream>
using namespace std;
class Counter
{
    private:
        int num;
    public:
        Counter()
        {
            num = 0;
        }
        Counter(int a)
        {
            num = a;
        }
        void display()
        {
            cout << "Num: " << num << endl;
        }
        void operator ++()
        {
            ++num;
        }
        void operator ++(int)
        {
            num++;
        }
};
int main()
{
    Counter c(3);
    c.display();
    ++c;
    c.display();
    c++;
    c.display();
    return 0;
}