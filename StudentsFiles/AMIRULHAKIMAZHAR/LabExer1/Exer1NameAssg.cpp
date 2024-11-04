
#include <iostream>
#include <string>
using namespace std; 

int main() 
{
   int year, currentyear, age;
   string fullName;
   
   cout << "Enter your full name: \n";
   cin >> fullName;
   getline(cin, fullName);
   cout << "Enter your birth year: \n";
   cin >> year;
   cout << "Enter the current year: \n";
   cin >> currentyear;
   
   age = (currentyear - year) ;
   cout << "Hello," << fullName << "! ";
   cout << "You are " << age << " years old.\n";
    return 0;
}