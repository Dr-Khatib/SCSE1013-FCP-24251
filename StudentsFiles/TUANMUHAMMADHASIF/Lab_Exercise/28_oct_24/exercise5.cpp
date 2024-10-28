#include <iostream>
using namespace std;

int main()
{
	int integer;
	
	cout << "Enter a number (1-5): ";
	cin >> integer;
	
	switch (integer)
	{
		case 1:
			cout << "You chose 1 - Always be no 1!";
			break;
		case 2:
			cout << "You chose 2 - Good choice!";
			break;
		case 3:
			cout << "You chose 3 - It's a wrap!";
			break;
		case 4:
			cout << "You chose 4 - Almost there!";
			break;
		case 5:
			cout << "You chose 5 - This was the last number!";
			break;
		default:
			cout << "-404-...the number you choose is not in the range in 1 to 5 ^_^' ";	
	}
	
	return 0;
}