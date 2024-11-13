#include <iostream>
#include <cmath> //library functions

using namespace std;

void greet(); // function prototype

int main()
{
    double result = sqrt(16.0);
    cout << "Square root of 16 is: " << result << endl;

    greet(); // Calling the user-defined function
    return 0;
}

void greet() // user defined function
{
    cout << "Hello from greet function!" << endl;
}