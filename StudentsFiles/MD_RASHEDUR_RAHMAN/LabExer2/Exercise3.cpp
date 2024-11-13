
/*Exercise 3: Basic Function Definition
This exercise introduces how to declare and define a basic function:
Define a function named greet that takes no parameters and outputs "Hello, World!". Then, call this function from main().
*/



#include <iostream>

using namespace std;

void greet(); // Function declaration


int main() {
    greet(); // Call the greet function
    return 0;
}

// Function definition
void greet() {
    cout << "Hello, World!" << endl;
}
