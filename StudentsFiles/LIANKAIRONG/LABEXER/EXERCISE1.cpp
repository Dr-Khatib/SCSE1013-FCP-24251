#include <iostream>
#include <string>
using namespace std;

int main() {
    int age, birthYear, currentYear=2024;
    string fullName;
    cout << "Enter your full name : ";
    getline(cin,fullName);
    cout << "Enter your birth year : ";
    cin>> birthYear;
    
    age = currentYear - birthYear;
    
    cout <<"Hello, " << fullName << " ! " << "You are "<< age << " years old.";
   
    
    return 0;
}