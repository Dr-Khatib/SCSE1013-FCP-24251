#include <iostream>
using namespace std;

int main() {
    char name[50]; 
    int currentYear, year, age;

   
    cout << "Please enter your name: ";
    cin.getline(name, 50);
   
    cout << "Please enter your birth year: ";
    cin >> year;

  
    currentYear = 2024;
    age = currentYear - year;

  
    cout << "Hello, " << name <<"! Your age is " << age << " years old." << endl; // Corrected 'end1' to 'endl'

    return 0; 
}

