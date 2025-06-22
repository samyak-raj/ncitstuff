//abstract class
//we cant make objects of abstract class
#include <iostream>
using namespace std;

class Book 
{
    public:
        virtual void display() = 0;
};

class Math : public Book 
{
    public:
        void display()
        {
            cout << "I am math" << endl;
        }
};

class Oop : public Book 
{
    public:
        void display()
        {
            cout << "I am OOP" << endl;
        }
};

int main()
{
    Book *ptr;

    Math m;
    ptr = &m;
    ptr -> display();

    Oop o;
    ptr = &o;
    ptr -> display();
    return 0;
}

