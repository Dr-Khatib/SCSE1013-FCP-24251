
#include <iostream>
using namespace std;

int main()
{
    double num;
    
    cout << "This program just show numbers.\n";
    cout << "Please enter a number between 1 to 5:\n";
    cin >> num;
    
    if (num >= 1 && num <= 5) {
        cout << "You chose " << num << ". Nice!";
    } else {
        cout << "Oops! " << num << " is not within range.\n";
    }
    return 0;
}