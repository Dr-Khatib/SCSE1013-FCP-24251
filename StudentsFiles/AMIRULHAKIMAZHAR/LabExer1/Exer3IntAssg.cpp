
#include <iostream>
using namespace std;

int main() 
{
    int integer;
    
    cout << "This program identifies the entered integer is ";
    cout << "positive, negative, or zero.\n";
    cout << "Enter an integer: \n";
    cin >> integer;
    
    if (integer < 0) {
        cout << integer << " is a negative integer.\n";
    } else if (integer > 0) {
        cout << integer << " is a positive integer.\n";
    } else {
        cout << integer << " is zero.\n";        
    }
    return 0;
}