#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    int birthYear;
    const int currentYear = 2024;

    cout << "Enter your full name: ";
    getline(std::cin, fullName);
    cout << "Enter your birth year: ";
    cin >> birthYear;

    int age = currentYear - birthYear;

    cout << "Hello, " << fullName << "! You are " << age << " years old." << std::endl;

    return 0;
}