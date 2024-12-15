
#include <iostream>

using namespace std;

void displaySum(int,int);// Function that takes two integers and displays their sum


int main() {
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

void displaySum(int a,int b){   // Function definition
    cout <<  "The Sum of two numbers :" << a+b;
}
  


