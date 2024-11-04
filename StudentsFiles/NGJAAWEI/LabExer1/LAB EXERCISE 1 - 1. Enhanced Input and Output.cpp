<<<<<<< HEAD:StudentsFiles/NGJAAWEI/LAB EXERCISES 1/LAB EXERCISE 1 - 1. Enhanced Input and Output.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char name[100];
    int birth_year;

    cout << "Enter your full name: " ; cin.getline(name, 100);
    cout << "Enter your birth year: "; cin >> birth_year;
    cout << "Hello, " << name << "! You are " << birth_year << " years old.";

    return 0;
}
=======
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    char name[100];
    int birth_year, age;

    cout << "Enter your full name: " ; cin.getline(name, 100);
    cout << "Enter your birth year: "; cin >> birth_year;
    
    age = 2024 - birth_year;
    
    cout << "Hello, " << name << "! You are " << age << " years old.";

    return 0;
}
>>>>>>> e3e5ef54f3472b737302ee0c9fd3e2ce743541f2:StudentsFiles/NGJAAWEI/LabExer1/LAB EXERCISE 1 - 1. Enhanced Input and Output.cpp
