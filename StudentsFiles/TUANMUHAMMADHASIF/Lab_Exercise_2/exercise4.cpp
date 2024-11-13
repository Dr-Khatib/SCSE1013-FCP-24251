/* Exercise 4: Function with Parameters
Write a function called displaySum that takes two integer parameters and displays their sum. Test this function by calling it with any two numbers from main().*/

#include <iostream>

using namespace std;

int displaySum(int,int); // Function that takes two integers and displays their sum


int main() {
    int x = 5, y = 10;
    displaySum(x, y); // Call the function with two numbers
    return 0;
}

int displaySum (int x, int y) //Function definition
{
	int sum;
	
	sum= x+y; //math operation
	
	cout << "The sum of two numbers is " << sum << endl; //display the sum of two numbers
	
	return sum;
	
}