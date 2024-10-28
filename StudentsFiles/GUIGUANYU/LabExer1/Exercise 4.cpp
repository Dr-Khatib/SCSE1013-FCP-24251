/*Write a C++ program that asks the user to input three numbers and determines 
if the first number is the largest or if there is a tie for the largest number.*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if ((num1 > num2)&&(num1 >num3))
        cout << num1 << " is the largest";
    else if ((num1 >= num2)&&(num1 >= num3))
        cout << num1 << " is the largest (or tied for largest).";
    else
        cout << num1 << " is not the largest";

    return 0; 
}