//multiple inheritance
#include <iostream>
using namespace std;
class AcademicMarks 
{
    protected:
        int acMarks;
    public:
        void inputAcademicMarks()
        {
            cout << "Enter acMarks: " << endl;
            cin >> acMarks;
        }
        void displayAcademicMarks() 
        {
            cout << "Academic marks: " << acMarks << endl;
        }
};

class ExtraMarks 
{
    protected:
        int eMarks;
    public:
        void inputExtraMarks()
        {
            cout << "Enter extra marks: " << endl;
            cin >> eMarks;
        }
        void displayExtraMarks()
        {
            cout << "Extra marks: " << eMarks << endl;
        }
};

class Result: public AcademicMarks, public ExtraMarks 
{
    private:
        int result;
    public:
        void calculate()
        {
            result = acMarks + eMarks;
        }
        void display()
        {
            cout << "Result: " << result << endl;
        }
};

int main()
{
    Result obj;
    obj.inputAcademicMarks();
    obj.displayAcademicMarks();
    obj.inputExtraMarks();
    obj.displayExtraMarks();
    obj.calculate();
    obj.display();
    return 0;
}