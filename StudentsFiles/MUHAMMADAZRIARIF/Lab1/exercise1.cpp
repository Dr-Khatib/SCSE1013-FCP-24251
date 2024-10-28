#include <iostream>
#include <string>
using namespace std;

int main(){
    //declare variable
    int age;
    int birthYear;
    string fullName;
    int term = 1;
    
    //getting full name
    cout << "Enter your full name: ";
    getline (cin, fullName);

    cout << "Enter your birth year: ";
    cin >> birthYear;

    //calculate age
    age = 2024 - birthYear;


    //display
    cout << "Hello, " << fullName << "! You are " << age << " years old.";
    return 0;
}
