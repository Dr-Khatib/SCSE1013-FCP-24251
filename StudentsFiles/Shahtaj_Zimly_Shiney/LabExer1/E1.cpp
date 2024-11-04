//C++ program that asks the user to enter their full name (with spaces) and their birth year. Calculate their age based on the current year (assume 2024).

#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaring variables
    string fullName;
    int birthYear, age;
    //getting user input for fullname and age
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Enter your birth year: ";
    cin >> birthYear;
    //calculating age
    age = 2024 - birthYear;
    //printing name and age
    cout << "Hello, " << fullName << "! You are " << age << " years old." << endl;

    return 0;
}
