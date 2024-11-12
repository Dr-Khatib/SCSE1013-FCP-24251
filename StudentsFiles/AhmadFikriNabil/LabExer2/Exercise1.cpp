#include <iostream> // for the library function
#include <cmath> // for the library function

using namespace std;

void greet(); // user-defined function

int main() {
    double result = sqrt(16.0); // call the library function
    cout << "Square root of 16 is: " << result << endl;

    greet(); // call the user-defined function
    return 0;
}

void greet() { // definition of user-defined function
    cout << "Hello from greet function!" << endl;
}
