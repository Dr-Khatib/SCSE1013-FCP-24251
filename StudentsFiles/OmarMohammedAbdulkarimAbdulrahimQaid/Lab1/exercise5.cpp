#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number between 1 and 5: ";
    cin >> n;

    // Use a switch statement to print a message based on the input
    switch (n) {
        case 1:
            cout << "You chose 1 - Starting point!" << endl;
            break;
        case 2:
            cout << "You chose 2 - Moving forward!" << endl;
            break;
        case 3:
            cout << "You chose 3 - Halfway there!" << endl;
            break;
        case 4:
            cout << "You chose 4 - Almost there!" << endl;
            break;
        case 5:
            cout << "You chose 5 - Goal reached!" << endl;
            break;
        default:
            cout << "Error: Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
