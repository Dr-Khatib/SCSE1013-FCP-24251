/*
    Lab Exercise 1: Exercise 2
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 28/10/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float num1, num2, sum, difference, product, quotient;

    cout << "\nEnter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1/num2;

    cout << "Sum: " << fixed << setprecision(2) << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << "\n" << endl;

    return 0;
}