/*
    Lab Exercise 1: Exercise 4
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 28/10/2024
*/

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    cout << "\nEnter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
        cout << num1 << " is the largest.\n";
    else if ((num1 == num2 && num1 > num3) || (num1 > num2 && num1 == num3))
        cout << num1 << " is the largest (or tied for largest).\n" << endl;
    else 
        cout << num1 << " is not the largest.\n" << endl;

    return 0;
}