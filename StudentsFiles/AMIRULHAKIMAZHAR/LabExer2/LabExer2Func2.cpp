#include <iostream>
#include <cmath>

using namespace std;


int main() 
{
    double num, squared;

    cout << "This program will calculate the square of entered value.\n";
    cout << "Enter a number: ";
    cin >> num; 

    squared = pow(num, 2);
    cout << "The power of ";
    cout << num << " is " << squared << ".";
    return 0;
}
