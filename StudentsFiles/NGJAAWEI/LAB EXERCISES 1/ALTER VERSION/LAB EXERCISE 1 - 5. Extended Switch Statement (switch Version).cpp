#include <iostream>
using namespace std;

int main ()
{
    int input;

    cout << "Enter a number (1-5): "; 
    cin  >> input;

    cout << "You chose " << input << " - ";

	switch (input)
	{
		case 1: cout << "On the edge!";
		        return 0;
		        
		case 2: cout << "Almost there!";
				return 0;
				
		case 3: cout << "At the middle.";
				return 0;
				
		case 4: cout << "Almost there!";
		        return 0;
		        
		case 5: cout << "On the edge!";
		        return 0;
		        
		default: cout << "Error, out of the range!";
	}

    return 0;
}
