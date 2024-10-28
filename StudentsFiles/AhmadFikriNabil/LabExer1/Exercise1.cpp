/*
    Lab Exercise 1: Exercise 1
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 28/10/2024
*/

#include <iostream>
using namespace std;

int main() {

    char fullName[30];
    int birthYear, age;

    cout << "\nEnter your full name: ";
    cin.getline(fullName, 30);
    cout << "Enter your birth year: ";
    cin >> birthYear;

    age = 2024 - birthYear;

    cout << "Hello, " << fullName << "!";
    cout << " You are " << age << " years old.\n" << endl;

    return 0;
}

