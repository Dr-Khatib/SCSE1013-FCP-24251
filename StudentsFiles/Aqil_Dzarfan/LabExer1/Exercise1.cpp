#include <iostream>
using namespace std;

int main()
{
    int dob;
    string name;

    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your birth year: ";
    cin >> dob;
    cout << "Hello, " << name << "! You are " << 2024 - dob << " years old.";

    return 0;
}