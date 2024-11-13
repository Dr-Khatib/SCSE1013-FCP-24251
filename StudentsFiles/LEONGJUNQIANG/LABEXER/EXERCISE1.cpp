#include <iostream>
#include <string>
using namespace std;

int main(){
    int birthyear, age;
    int yearnow = 2024;
    string name;
    
    cout << "Enter Your Full Name: ";
    getline(cin,name);
    cout << "Enter your birth year: ";
    cin >> birthyear;

    age = yearnow - birthyear;

    cout << "Hello, " << name << "! Your are " << age << " years old." ;


    return 0;
}