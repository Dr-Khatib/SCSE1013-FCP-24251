#include <iostream>
using namespace std;

int main ()
{
    double input;

    cout << "Enter a number (1-5): "; 
    cin  >> input;

    cout << "You chose " << input << " - ";

    if (input >= 1 && input <= 5)
    {
        if      (input == 1 || input == 5) cout << "On the edge!";
        else if (input > 1 && input < 3)   cout << "Almost there!";
        else if (input == 3)               cout << "At the middle.";
        else if (input > 3 && input < 5)   cout << "Almost there!";
    }

    else 
        cout << "Error, out of the range!";

    return 0;
}