#include <iostream>

using namespace std;

int main() 
{
    int number;

    
    cout << "Please enter an integer: "; 
    cin >> number;                       

    
    if (number > 0) {
        cout << "The number " << number << " is positive." << endl; 
    } else if (number < 0) {
        cout << "The number " << number << " is negative." << endl; 
    } else {
        cout << "The number is zero." << endl; 
    }

    return 0; 
}
