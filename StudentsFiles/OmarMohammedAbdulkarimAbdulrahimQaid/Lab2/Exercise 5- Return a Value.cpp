#include <iostream>

using namespace std;

// Function that triples the given integer and returns the result
int triple(int n);

int main() {
    int value = 5;
    int result = triple(value); // Call the function and store the result
    cout << "The triple of " << value << " is: " << result << endl;
    return 0;
}

// Function definition
int triple(int n) {
    return n*3;
}
