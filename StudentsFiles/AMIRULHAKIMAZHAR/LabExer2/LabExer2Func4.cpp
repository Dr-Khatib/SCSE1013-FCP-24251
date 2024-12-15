#include <iostream>

using namespace std;

// Function that takes two integers and displays their sum
void displaySum(int int1, int int2);

int main() {
    int x = 25, y = 13;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

// Function definition
void displaySum(int int1, int int2){
    cout << "The sum of the integers is " << int1 + int2 << ".";
}