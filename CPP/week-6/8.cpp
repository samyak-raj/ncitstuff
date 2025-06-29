#include <iostream>
using namespace std;
class Time {
    private:
        int hrs, mins, secs;
    public:
        Time() {
            hrs = 0;
            mins = 0;
            secs = 0;
        }
        Time(int x, int y, int z) {
            hrs = x; 
            mins = y;
            secs = z;
        }
        operator int() {
            int duration;
            duration = (hrs * 3600) + (mins * 60) + secs;
            return duration;
        }
        void display() {
            cout << "Hours: " << hrs << endl << "minutes: " << mins << endl << "Seconds: " << secs << endl;
        }
};
int main() {
    Time t1(1, 20, 100);
    int duration;
    duration = t1;
    cout << "Duration in minutes: " << duration << endl;
    return 0;
}
