//convert hour to minute class
//using casting operator
#include <iostream>
using namespace std;
class Minute {
    private:
        int min;
    public:
        Minute() {
            min = 0;
        }
        Minute(int m) {
            min = m; 
        }
        void displayMinute() {
            cout << "Min: " << min << endl;
        }
};

class Hour {
    private: 
        int hr;
    public: 
        Hour() {
            hr = 0;
        }
        Hour(int h) {
            hr = h;
        }
        void displayHour(){
            cout << "Hour: " << hr << endl;
        }
        operator Minute(){ 
            int mins;
            mins = 60 * hr;
            Minute m(mins);
            return m;
        }
};

int main() {
    Hour h(3);
    Minute m;
    m = h;
    m.displayMinute();
    h.displayHour();
    return 0;
}