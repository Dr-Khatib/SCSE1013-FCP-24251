#include <iostream>
using namespace std;

int main()
{
	int input1, input2, input3;
	
	cout << "Enter three numbers:";
	cin >> input1 >> input2 >> input3;
	
	if (input1 > input2 && input1 > input3)
		cout << "The first number, " << "" << input1 << " is the largest";
	
	else if (input2 > input1 && input2 > input3)
		cout << "The second number, " << "" << input1 << " is the largest";
		
	else if (input3 > input2 && input3 > input1)
		cout << "The first number, " << "" << input1 << " is the largest";
	
	else if (input1 == input2 && input1 > input3)
		cout << "The first and second numbers are tied for the largest which is " << input1;
		
	else if (input1 == input3 && input1 > input2)
		cout << "The first and third numbers are tied for the largest which is " << input1;		
		
	else if (input2 == input3 && input2 > input1)
		cout << "The second and third numbers are tied for the largest which is " << input2;
		
	
	return 0;
}
