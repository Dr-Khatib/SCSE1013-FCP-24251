//C++ program that takes a number between 1 to 5 from the user and prints a message based on the input. If the input is out of range, print an error message.

#include <iostream>
using namespace std;
int main(){
    int choice;
    cout << "Enter a number (1-5): ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "You chose 1 - Good choice!" << endl;
            break;
        case 2:
            cout << "You chose 2 - Yay!" << endl;
            break;
        case 3:
            cout << "You chose 3 - Amazing!" << endl;
            break;
        case 4:
            cout << "You chose 4 - Almost there!" << endl;
            break;
        case 5:
            cout << "You chose 5 - Perfect!" << endl;
            break;
        default:
            cout << "Invalid input. Please choose a number between 1 and 5." << endl;
    }

    return 0;
}