#include <iostream>
using namespace std;

int main() {
    string FullName;
    int BirthYear;
    const int CurrentYear = 2024;

    cout << "Enter your full name: ";
    getline(cin,FullName);


    cout << "Enter your birth year: ";
    cin >> BirthYear;


    int age = CurrentYear - BirthYear;
    cout << ("Hello, ") << FullName << ("! You are ") << age << (" years old.");


	return 0;
}