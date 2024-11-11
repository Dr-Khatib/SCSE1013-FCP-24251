//This exercise introduces how to declare and define a basic function:
//Define a function named greet that takes no parameters and outputs "Hello, World!". 
//Then, call this function from main().

#include <iostream>
using namespace std;

//fucntion prototype
void greet();

int main()
{
	greet();
	
	return 0;
}

//function definition
void greet()
{
	cout << "Hello, World!";
}