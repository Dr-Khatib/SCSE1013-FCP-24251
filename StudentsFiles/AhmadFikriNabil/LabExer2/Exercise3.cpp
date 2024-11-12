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