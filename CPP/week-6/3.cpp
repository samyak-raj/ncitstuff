//wap to overload + operator to add two times (hr, min) T3 = T1 + T2
#include <iostream>
using namespace std;
class Time {
    private:
        int hr, min;
    public:
        Time() {
            hr = 0;
            min = 0;
        }
        Time(int h, int m) {
            hr = h;
            min = m;
        }
        void display() {
            cout << "Hour: " << hr << endl << "Minutes: " << min << endl;
        }
        friend Time operator +(Time &a, Time &b);
};

Time operator +(Time &a, Time &b) {
    Time temp;
    int totalMin = (a.hr + b.hr) * 60 + (a.min + b.min);
    temp.hr = totalMin / 60;
    temp.min = totalMin % 60;
    return temp;
}

int main() {
    Time T1(2, 50), T2(3, 40), T3;
    T3 = T1 + T2;
    cout << "T3= " << endl;
    T3.display();
    return 0;
}