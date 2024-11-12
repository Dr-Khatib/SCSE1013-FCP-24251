/* Exercise 2: Library Function Usage
Complete the program by entering a number and observing the use of the library function:*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered;
    cout << "Enter a number to powered: ";
    cin >> num;

    powered = pow(num,2);
    cout << "The power of " <<num << " is "<< powered <<endl;

    return 0;
}

/*
OUTPUT:

Enter a number to powered: 3 //input from user
The power of 3 is 9

this program used standard library which is cmath

*/