#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char name[100];
    int birth_year;

    cout << "Enter your full name: " ; cin.getline(name, 100);
    cout << "Enter your birth year: "; cin >> birth_year;
    cout << "Hello, " << name << "! You are " << birth_year << " years old.";

    return 0;
}