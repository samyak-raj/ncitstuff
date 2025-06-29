//abstract class
#include <iostream>
#include <string.h>
using namespace std;

class Media 
{
    protected:
        int price;
        char title[20];
    public:
        virtual void display() = 0;
        Media(int x, char y[20]) 
        {
            price = x;
            strcpy(title, y);
        }
};

class Book : public Media 
{
    private:
        int page;
    public:
        Book(int z, char t[20], int p) : Media(z, t) 
        {
            page = p;
        }
        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
            cout << "Page: " << page << endl;
        }
};

class Tape : public Media
{
    private:
        int record;
    public:
        Tape(int p, char t[20], int r) : Media(p, t)
        {
            record = r;
        }
        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
            cout << "Record: " << record << endl;
        }
};

int main()
{
    Media *ptr;
    Book b(1000, "SRS", 500);
    ptr = &b;
    ptr->display();

    Tape t(2500, "One piece", 100);
    ptr = &t;
    ptr->display();
    return 0;
}