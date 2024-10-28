/*Write a C++ program that takes a number between 1 to 5 from the user and prints a message based on the input. 
If the input is out of range, print an error message.*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number (1-5) : ";
    cin >> num;

    switch (num)
    {
        case 1 : cout << "You choose " << num << " - Almost there!"; break;
        case 2 : cout << "You choose " << num << " - Almost there!"; break;
        case 3 : cout << "You choose " << num << " - Almost there!"; break;
        case 4 : cout << "You choose " << num << " - Almost there!"; break;
        case 5 : cout << "You choose " << num << " - Almost there!"; break;
        default : cout << "You choose " << num << " - Try again!"; break;
    }
    
    return 0;
}