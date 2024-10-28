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
    
    // getting a legit birth year
    while (term > 0)
    {
        cout << "Enter your birth year: ";
        cin >> birthYear;
        if (birthYear > 2024 || birthYear < 0)
        {
            cout << "Enter your real birth year\n";
        }
        else{
            term = 0;
        }
    }
    //calculate age
    age = 2024 - birthYear;


    //display
    cout << "Hello, " << fullName << "! You are " << age << " years old.";
    return 0;
}
