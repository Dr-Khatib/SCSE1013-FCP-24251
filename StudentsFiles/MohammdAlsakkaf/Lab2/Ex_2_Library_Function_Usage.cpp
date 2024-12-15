/*

Exercise 2: Library Function Usage
Complete the program by entering a number and observing the use of the library function:

*/

//......
//...........
//................


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered;
    cout << "Enter a number to be powered: ";
    cin >> num;

    powered = pow(num, 2); // Using pow() library function to square the input
    cout << "The power of " << num << " is: " << powered << endl;

    return 0;
}


//................
//...........
//......

//This program takes an input from the user, squares it using pow(num, 2), and displays the result