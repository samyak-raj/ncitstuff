//convert hour class to minute class
//using constructor
#include <iostream>
using namespace std;
class Hour {
    private:
        int hr;
    public:
        Hour() {
            hr = 0;
        }
        Hour(int h){
            hr = h;
        }
        void displayHour(){
            cout << "Hour: " << hr << endl;
        }
        int getHour(){
            return hr;
        }
};

class Minute {
    private:
        int min;
    public:
        Minute(){
            min = 0;
        }
        Minute(Hour hour) {
            min = 60 * (hour.getHour());
        }
        void displayMinute(){ 
            cout << "Min : " << min << endl;
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