#include <iostream>
using namespace std;

int main() {
    int integer;
    cout << "Enter an integer: ";
    cin >> integer;
    
    if(integer == 0){
        cout << integer << " is zero." << endl;
    }else if(integer > 0){
        cout << integer << " is positive." << endl;
    }else{
        cout << integer << " is negative." << endl;
    }

    return 0;
}