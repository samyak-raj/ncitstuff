//file handling
//using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout("../srs.txt");
    int roll;
    char name[10];
    cout << "Enter name and roll" << endl;
    cin >> name;
    fout << name << endl;
    cin >> roll;
    fout << roll << endl;
    fout.close();

    ifstream fin("../srs.txt");
    fin >> name;
    fin >> roll;
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    fin.close();
    return 0;
}