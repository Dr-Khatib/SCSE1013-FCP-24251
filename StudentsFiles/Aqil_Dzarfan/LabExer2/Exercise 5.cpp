#include <iostream>

using namespace std;

// Function that triples the given integer and returns the result
int triple(int x);

int main()
{
    int value = 4;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

// Function definition
int triple(int const val)
{
    return val * 3;
}