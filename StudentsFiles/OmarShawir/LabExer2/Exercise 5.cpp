#include <iostream>

using namespace std;

int triple(int);// Function that triples the given integer and returns the result


int main() {
    int value = 4;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

int triple(int num){
	return num * 3;
}// Function definition

