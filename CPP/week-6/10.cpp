//by using casting operator
#include <iostream>
using namespace std;
class Rupees {
    private:
        double rs;
    public:
        Rupees(){
            rs = 0;
        }
        Rupees(double r) {
            rs = r;
        }
        void displayRupees() {
            cout << "Rs " << rs << endl;
        }
};

class Dollar {
    private:
        double dol;
    public:
        Dollar() {
            dol = 0;
        }
        Dollar(int d) {
            dol = d;
        }
        void displayDollar(){
            cout << "$" << dol << endl;
        }
        operator Rupees() {
            double rupee;
            rupee = 135 * dol;
            Rupees r(rupee);
            return r;
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