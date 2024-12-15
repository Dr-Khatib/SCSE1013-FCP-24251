#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet(); // This is user-defined function.

int main() {
    double result = sqrt(16.0); // This is a library function.
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() {
    cout << "Hello from greet function!" << endl;
}

