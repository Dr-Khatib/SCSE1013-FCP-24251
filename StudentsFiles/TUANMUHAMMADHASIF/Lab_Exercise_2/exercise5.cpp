/* Exercise 5: Return a Value
Create a function named triple that takes an integer as a parameter, triples it, and returns the result. Call this function in main() with a test value, and display the result.*/

#include <iostream>

using namespace std;

int triple(int); // Function that triples the given integer and returns the result


int main() {
    int value = 4;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

int triple (int integer)// Function definition
{
	int triples;
	
	triples= integer*integer*integer;
	
	return triples;
	
}