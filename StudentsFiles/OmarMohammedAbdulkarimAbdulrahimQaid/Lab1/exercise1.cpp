#include <iostream>
using namespace std;

int main() {
    string FullName;
    int BirthYear;
    const int CurrentYear = 2024;

    //The program asks the user for their full name
    cout << "Enter your full name: ";
    getline(cin,FullName);

    //The program asks the user for their birthyear
    cout << "Enter your birthyear: ";
    cin >> BirthYear;

    //The program calculates the age of the user
    int age = CurrentYear - BirthYear;

    //The program displays the age of the user
    cout << ("Hello, ") << FullName << ("! You are ") << age << (" years old.");


return 0;

}
