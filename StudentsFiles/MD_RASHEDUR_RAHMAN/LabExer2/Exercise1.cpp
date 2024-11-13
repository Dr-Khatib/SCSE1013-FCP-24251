/*Exercise 1: Identify the Function Type
Identify which part is the library function and which is the user-defined function:
*/



//1.Here, sqrt() is a library function


//2.Here, void greet() is a user-defined function



#include <iostream>
#include <cmath> // for the library function

using namespace std;

void greet();

int main() {
    double result = sqrt(16.0); //Here, sqrt() is a library function
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}


// Here, void greet() is a user-defined function
void greet() {
    cout << "Hello from greet function!" << endl;
}

