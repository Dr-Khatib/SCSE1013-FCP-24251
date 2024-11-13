#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char name[100];
    int birth_year, age;

    cout << "Enter your full name: " ; cin.getline(name, 100);
    cout << "Enter your birth year: "; cin >> birth_year;
    
    age = 2024 - birth_year;
    
    cout << "Hello, " << name << "! You are " << age << " years old.";

    return 0;
}
