//create a class called Player consisting of player name, country name, no. of goal scored and jersey numbers. Create two functions for input and display of data. Define member function from both inside and outside the class
#include <iostream>
using namespace std;
//defining member functions inside the class
class Player
{
    private: 
    char name[20], country[20];
    int goalScored, jerseyNumber;

    public:
    void input()
    {
        cout << "Enter Name and country: " << endl;
        cin >> name >> country;
        cout << "Enter goals scored and jersey number: " << endl;
        cin >> goalScored >> jerseyNumber; 
    }
    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Number of goals scored: " << goalScored << endl;
        cout << "Jersey number: " << jerseyNumber << endl;
    }
};

int main()
{
    Player p;
    p.input();
    p.output();
    return 0;
}