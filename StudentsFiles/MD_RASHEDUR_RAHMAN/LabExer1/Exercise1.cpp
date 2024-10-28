#include <iostream>
#include <string>
#include<conio.h>

using namespace std;

int main() {
    string name;
    int birth_year;
    const int year = 2024;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your birth year: ";
    cin >> birth_year;
    int age = year - birth_year;
    cout << "Hello," << name << "! You are " << age << " years old." << endl;
    getch();
    return 0;
}

