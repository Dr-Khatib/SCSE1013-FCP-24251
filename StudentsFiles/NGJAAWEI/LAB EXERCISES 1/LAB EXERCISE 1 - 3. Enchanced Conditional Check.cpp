#include <iostream>
using namespace std;

int main ()
{
    int integer;

    cout << "Enter an integer: "; 
    cin  >> integer;

    if (integer > 0)
        cout << integer << " is positive.";

    else if (integer < 0)
        cout << integer << " is negative.";
    
    else
        cout << integer << "is zero.";

    return 0;
}