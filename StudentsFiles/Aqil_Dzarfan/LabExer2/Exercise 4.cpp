#include <iostream>

using namespace std;

// Function that takes two integers and displays their sum
void displaySum(int x, int y);

int main()
{
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

// Function definition
void displaySum(int const x, int const y)
{
    cout << x + y;
}