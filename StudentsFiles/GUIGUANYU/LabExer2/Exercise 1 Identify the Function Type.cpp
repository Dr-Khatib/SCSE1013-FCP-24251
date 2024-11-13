//Exercise 1: Identify the Function Type
//Identify which part is the library function and which is the user-defined function:

#include <iostream>
#include <cmath> 											// for the library function

using namespace std;										

void greet();

int main() 
{
    double result = sqrt(16.0); 							// sqrt(16.0) is the library function with pass by value arguement
    cout << "Square root of 16 is: " << result << endl;

    greet();												// calling user-defined function
    return 0;
}

void greet() 												// user-defined function header && empty parameter list in void data type
{
    cout << "Hello from greet function!" << endl;			// user-defined function body
}