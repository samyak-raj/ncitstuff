//primitive to class data type conversion
//we use constructor
#include <iostream>
using namespace std;
class Time {
    private:
        int hrs, mins;
    public:
        Time() {
            hrs = 0;
            mins = 0;
        }
        Time(int t) {
            hrs = t / 60;
            mins = t % 60;
        }
        void display() {
            cout << "Hours: " << hrs << endl << "Minutes: " << mins << endl;
        }
};

int main() {
    Time t1;
    int duration = 85;
    t1 = duration;//t1 = Time(duration)
    t1.display();
    return 0;
}