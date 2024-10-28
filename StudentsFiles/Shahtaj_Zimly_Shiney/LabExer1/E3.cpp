//C++ program that checks whether a given integer is positive, negative, or zero.
    
#include <iostream>
using namespace std;
int main(){
    int num;//declaring variable
    cout << "Enter an integer: ";
    cin >> num;//taking input from user

    //checking
    if (num > 0) cout << num << " is positive." << endl;
    else if (num < 0) cout << num << " is negative." << endl;
    else cout << "The number is zero." << endl;

    return 0;
}