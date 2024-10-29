#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Determine the largest number or if there's a tie
    if (num1 == num2 && num1 == num3) {
        cout << "All three numbers are equal." << endl;
    } else if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 || num1 == num3) {
            cout << "There is a tie for the largest number: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num1 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num2 == num3) {
            cout << "There is a tie for the largest number: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num2 << endl;
        }
    } else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}