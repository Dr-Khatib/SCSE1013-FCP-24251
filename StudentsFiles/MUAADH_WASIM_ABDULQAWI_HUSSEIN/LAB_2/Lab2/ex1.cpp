// Identify which part is the library function and which is the user-defined function:

#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet(); //forward declaration of user-defined function

int main() {
    double result = sqrt(16.0); ////"sqrt() is a library function from cmath library"
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() /*/* .....user_defined function definition.....*/ {
    cout << "Hello from greet function!" << endl;
}

//#
