//Create a function named triple that takes an integer as a parameter, triples it, and returns the result. 
//Call this function in main() with a test value, and display the result.

#include <iostream>
using namespace std;

// function protortype
int triple(int );


int main() {
    int value = 4;
    int result = triple(value); 									// Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

// Function definition
int triple(int x)
{
	return 3*x;
}