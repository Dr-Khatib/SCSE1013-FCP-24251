/*Write a C++ program that asks the user to enter their full name (with spaces) and their birth year. 
Calculate their age based on the current year (assume 2024).*/

#include <iostream>
using namespace std;

int main()
{
    int BY, age; //BY = Birth Year
    char name[30];

    cout << "Enter your full name : ";
    cin.getline(name,30);

    cout << "Enter your birth year : ";
    cin >> BY;

    age = 2024 - BY;
    
    cout << "Hello," << name << "!You are " << age << " years old.";

    return 0;
}