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
        int getdata()
        {
            return a;
        }
};

class Two:public One 
{
    private:
        int b;
    public:
        void getdata_b()
        {
            cout << "Enter a number: ";
            cin >> b;
        }
        void display()
        {
            cout << "Addition: " << getdata() + b;
        }
};

int main()
{
    Two obj;
    obj.setdata_a();
    obj.getdata_b();
    obj.display();
    return 0;
}