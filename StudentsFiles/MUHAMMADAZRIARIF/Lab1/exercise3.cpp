#include <iostream>
using namespace std;
int main(){
    //declare
    int number;

    //getting input
    cout << "Enter an integer: ";
    cin >> number;

    //display -tive or +tive
    if (number < 0){
        cout << number << " is negative.";
    }
    else if (number == 0){
        cout << number << " is zero.";
    }
    else if (number > 0 ){
        cout << number << " is positive.";
    }
    return 0;
} 
