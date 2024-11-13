/*Write a C++ program that takes two floating-point numbers and performs arithmetic operations. 
Format the output to show 2 decimal places.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2, sum, difference, product, quotient;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    quotient = num1/num2;

    cout << fixed << setprecision(2) 
         << "Sum : " << sum << endl
         << "Difference : " << difference << endl
         << "Product : " << product << endl
         << "Quotient : " << quotient ;

    return 0;
}