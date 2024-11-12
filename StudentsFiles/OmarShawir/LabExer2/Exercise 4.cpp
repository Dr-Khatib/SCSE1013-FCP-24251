#include <iostream>

using namespace std;

int displaySum(int, int); // Function that takes two integers and displays their sum


int main() {
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

int displaySum(int a, int b){
	cout<<"The sum of "<< a <<" and "<< b <<" is "<<a+b;
} // Function definition

