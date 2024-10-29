#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3){
        if (num1 == num2 || num1 == num3){
            cout << num1 << " is a tie for the largest number.";
        }
        else {
            cout << num1 << " is the largest number.";
        }
    }
    else if (num2 >= num1 && num2 >= num3){
        if (num2 == num3){
            cout << num2 << " is a tie for the largest number.";
        }
        else {
            cout << num2 << " is the largest number.";
        }
    }
    else if (num1 == num2 && num1 == num3){
        cout << num1 << " is the largest number and all number is equal.";
    }


    return 0;
}