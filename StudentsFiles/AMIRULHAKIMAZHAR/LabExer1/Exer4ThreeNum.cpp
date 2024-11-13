
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;
    
    cout << "This program can determine whether the first ";
    cout << "entered number between three is the largest or not.\n";
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    if (num1 <= num2 && num1 <= num3) {
        cout << num1 << " is the smallest number (or tied for smallest).\n";
    } else if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the largest number (or tied for largest).\n";
    } else {
        cout << num1 << " is not the largest number.\n";
    }
    
    return 0;
}