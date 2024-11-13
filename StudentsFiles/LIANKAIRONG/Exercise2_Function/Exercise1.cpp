
#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet(); //function prototype

int main() {
    double result = sqrt(16.0);  //sqrt(16.0) is a library math function with pass by value arguement
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() {   //This is user-defined function with no parameters and no return value
    cout << "Hello from greet function!" << endl;
}