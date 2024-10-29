#include <iostream>
using namespace std;

int main(){
    int num1;
    cout << "Enter an integer: ";
    cin >> num1;

    if (num1 == 0){
        cout << num1 << " is zero.";
    }
    else if(num1 < 0){
        cout << num1 << " is negative.";
    }
    else {
        cout << num1 << " is positive.";
    }


    return 0;
}