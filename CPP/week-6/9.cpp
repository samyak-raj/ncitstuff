//class to class data type conversion
//by using constructor
//convert dollar to rupee
#include <iostream>
using namespace std;
class Dollar {
    private:
        double dol;
    public:
        Dollar(){
            dol = 0;
        }
        Dollar(double d) {
            dol = d;
        }
        void displayDollar(){
            cout << "$" << dol << endl;
        }
        double getDollar() {
            return dol;
        }
};

class Rupees {
    private:
        double rs;
    public:
        Rupees(){
            rs = 0;
        }
        Rupees(Dollar dollar) {
            rs = 135 * (dollar.getDollar());
        }
        void displayRupees(){
            cout << "Rs. " << rs << endl;
        }
};

int main() {
    Dollar d(154);
    Rupees r;
    r = d;
    r.displayRupees();
    d.displayDollar();
    return 0;
}