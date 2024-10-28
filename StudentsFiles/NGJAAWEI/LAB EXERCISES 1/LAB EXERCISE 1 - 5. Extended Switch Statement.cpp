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
		case 1 ... 5: cout << "Almost there!";
		              return 0;
		        
		default: cout << "Error, out of the range!";
	}

    return 0;
}
