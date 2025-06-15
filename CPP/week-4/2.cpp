//single inheritance
#include <iostream>
using namespace std;
class One 
{
    private:
        int a;
    public: 
        void setdata_a()
        {
            cout << "Enter a number: " << endl;
            cin >> a;
        }
        int getData()
        {
            return a;
        }
};

class Two : public One 
{
    private:
        int b;
    public:
        void setdata_b()
        {
            cout << "Enter a number: " << endl;
            cin >> b;
        }
        void add()
        {
            cout << "Addition: " << getData() + b; 
        }
};

int main()
{
    Two obj;
    obj.setdata_a();
    obj.setdata_b();
    obj.add();
    return 0;
}