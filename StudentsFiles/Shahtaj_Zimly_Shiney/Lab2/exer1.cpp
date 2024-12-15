//Identify which part is the library function and which is the user-defined function:

#include <iostream> 
#include <cmath>
using namespace std;

void greet(); //prototype for user-defined function

int main() { //main() is library function
    double result = sqrt(16.0); //sqrt() is library function
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function greet();
    return 0;
}

void greet() { //user defined function
    cout << "Hello from greet function!" << endl;
}

