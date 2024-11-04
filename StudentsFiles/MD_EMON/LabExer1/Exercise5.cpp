#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose 1 - Just getting started!" << endl;
            break;
        case 2:
            cout << "You chose 2 - Keep it up!" << endl;
            break;
        case 3:
            cout << "You chose 3 - Halfway there!" << endl;
            break;
        case 4:
            cout << "You chose 4 - Almost there!" << endl;
            break;
        case 5:
            cout << "You chose 5 - Great job, you made it!" << endl;
            break;
        default:
            cout << "Error: Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
