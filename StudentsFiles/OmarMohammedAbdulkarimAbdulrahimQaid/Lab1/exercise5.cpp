#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number (1-5): ";
    cin >> number;


    if (number == 1) {
        cout << "You chose 1 - Just started!" << endl;
    } else if (number == 2) {
        cout << "You chose 2 - Making progress!" << endl;
    } else if (number == 3) {
        cout << "You chose 3 - Halfway there!" << endl;
    } else if (number == 4) {
        cout << "You chose 4 - Almost done!" << endl;
    } else if (number == 5) {
        cout << "You chose 5 - You finished!" << endl;
    } else {
        cout << "Error: Enter a number between 1 and 5." << endl;
    }

    return 0;
}
