//Write a C++ program that checks whether a given integer is positive, negative, or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    string state;

    cout << "Enter an integer : ";
    cin >> num;

    if (num < 0)
        state = "negative.";
    else if (num > 0)
        state = "positive.";
    else
        state = "zero.";

    cout << num << " is " << state;

    return 0;
}