#include <iostream>

using namespace std;

void displaySum(int num1, int num2); // Function that takes two integers and displays their sum


int main() {
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

 // Function definition
void displaySum(int num1, int num2) {
    int sum = num1 + num2;
    cout << "Sum of 2 numbers = " << sum << endl;
}