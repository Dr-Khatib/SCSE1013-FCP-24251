#include <iostream>

using namespace std;

// Function that takes two integers and displays their sum
void displaySum(int a, int b);

int main() {
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

// Function definition
void displaySum(int a, int b) {
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
}
