// C++ program that takes two floating-point numbers and performs arithmetic operations. Format the output to show 2 decimal places.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b; // declaring variables
    cout << "Enter two numbers: "<< endl; // prompt user input
    cin >> a >> b; // getting user input
    cout << fixed << setprecision(2);

    // printing while calculating sum
    cout << "Sum: " << a + b << endl;
    // printing while calculating difference
    cout << "Difference: " << a - b << endl;
    // printing while calculating product
    cout << "Product: " << a * b << endl;
    // printing while calculating quotient
    cout << "Quotient: " << a / b << endl;

    return 0;
}
