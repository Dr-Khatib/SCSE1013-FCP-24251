#include <iostream>
#include <cmath> // for the library function
using namespace std;

void greet();

int main() {
    //sqrt is library function  
    double result = sqrt(16.0); // calling the library function
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() { // definition of user function greet()
    cout << "Hello from greet function!" << endl;
}

