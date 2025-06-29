//class to primitive data type 
//we use casting operator
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
        Time(int x, int y) {
            hrs = x; 
            mins = y;
        }
        operator int() {
            int duration;
            duration = hrs * 60 + mins;
            return duration;
        }
        void display() {
            cout << "Hours: " << hrs << endl << "minutes: " << mins << endl;
        }
};
int main() {
    Time t1(1, 25);
    int duration;
    duration = t1;
    cout << "Duration in minutes: " << duration << endl;
    return 0;
}
