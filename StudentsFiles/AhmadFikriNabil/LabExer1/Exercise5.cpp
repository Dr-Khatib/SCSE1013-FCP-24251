/*
    Lab Exercise 1: Exercise 5
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 28/10/2024
*/

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "\nEnter a number (1-5): ";
    cin >> num;

    if (num == 1)
        cout << "You chose " << num << " - Start of range!\n" << endl;
    else if (num > 1 && num < 5)
        cout << "You chose " << num << " - Almost there!\n" << endl;
    else if (num == 5)
        cout << "You chose " << num << " - End of range!\n" << endl;
    else
        cout << "You chose " << num << " - Out of range!\n" << endl;

    return 0;
}