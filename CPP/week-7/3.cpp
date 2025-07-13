//file handling
//using fopen();

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;
    char name_one[10];
    fout.open("../country.txt");
    cout << "Enter the first name of country" << endl;
    cin >> name_one;
    fout << name_one << endl;
    fout.close();

    fout.open("../capital.txt");
    cout << "Enter capital of country: " << endl;
    cin >> name_one;
    fout << name_one << endl;
    fout.close();

    ifstream fin;
    fin.open("../country.txt");
    fin >> name_one;
    cout << "Country name: " << name_one << endl;
    fin.close();

    fin.open("../capital.txt");
    fin >> name_one;
    cout << "Capital: " << name_one << endl;
    fin.close();

    return 0;     

}