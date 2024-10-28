#include <iostream>
using namespace std;

int main()
{
	int input1, input2, input3;
	
	cout << "Enter three numbers:";
	cin >> input1 >> input2 >> input3;
	
	if (input1 >= input2 && input1 >= input3)
		cout << "" << input1 << " is the largest (or tied for largest)";
		
	else if (input2 >= input1 && input2 >= input3)
		cout << "" << input2 << " is the largest (or tied for largest)";
		
	else if (input3 >= input2 && input3 >= input2)
		cout << "" << input3 << " is the largest (or tied for largest)";
	
	return 0;
}