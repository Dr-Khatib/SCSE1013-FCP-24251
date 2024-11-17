/*

Exercise 1: Identify the Function Type
Identify which part is the library function and which is the user-defined function:

*/

//......
//...........
//................


#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet(); // Declaration of user-defined function

int main() {
    double result = sqrt(16.0); // Library function (cmath)
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() { // Definition of user-defined function
    cout << "Hello from greet function!" << endl;
}



//................
//...........
//......

//Library function: sqrt(16.0) - part of the <cmath> library
//User-defined function: greet() - defined and called by the programmer