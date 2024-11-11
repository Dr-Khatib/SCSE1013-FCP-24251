//Write a function called displaySum that takes two integer parameters and displays their sum. 
//Test this function by calling it with any two numbers from main().

#include <iostream>
using namespace std;

//function prototype
void displaySum(int, int);

int main()
{
	int x = 5, y = -9;
	displaySum(x,y);
	return 0;
}

//function definition
void displaySum(int num1, int num2)
{
    cout << "The sum of the two integers is " << num1 + num2;
}