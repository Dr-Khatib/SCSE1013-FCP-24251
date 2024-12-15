//Complete the program by entering a number and observing the use of the library function:

#include <iostream>
#include <cmath>												

using namespace std;

int main() 
{
    double num, squared;
    cout << "Enter a number to powered: ";
    cin >> num;
	
    squared = pow(num, 2.0);										
    cout << "The power of " << num << " is " << squared << endl;

    return 0;
}