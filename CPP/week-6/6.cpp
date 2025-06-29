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
        Time(int t) {
            hrs = t /3600;
            mins = (t % 3600) / 60;
            secs = t % 3600 % 60;
        }
        void display() {
            cout << "Hours: " << hrs << endl;
            cout << "Minutes: " << mins << endl;
            cout << "Seconds: " << secs << endl;
        }
};

int main() {
    Time T;
    int time = 4270;
    T = time;
    T.display();
    return 0;
}