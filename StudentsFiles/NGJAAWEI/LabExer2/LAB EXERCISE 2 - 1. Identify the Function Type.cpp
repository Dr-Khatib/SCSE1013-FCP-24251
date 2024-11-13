#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet();

int main() {
    double result = sqrt(16.0); 
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() {
    cout << "Hello from greet function!" << endl;
}

// Library Function      : line 9            : sqrt()
                         
/* User-Defined Function : line 16 - line 18 : void greet() {
                                                   cout << "Hello from greet function!" << endl;
                                               }
