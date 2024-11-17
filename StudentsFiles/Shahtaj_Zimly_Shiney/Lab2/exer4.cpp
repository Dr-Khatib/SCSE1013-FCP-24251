//Write a function called displaySum that takes two integer parameters and displays their sum. Test this function by calling it with any two numbers from main().

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
void displaySum(int a, int b){
cout<< "Required sum is " << a+b <<endl;
}


