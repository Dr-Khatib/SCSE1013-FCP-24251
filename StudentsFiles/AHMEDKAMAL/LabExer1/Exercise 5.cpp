#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number (1-5): ";
    cin >> choice;

switch (choice) {
case 1:
cout << "You chose 1 " << endl;
break;

case 2:
cout << "You chose 2 " << endl;
break;

case 3:
cout << "You chose 3 " << endl;
break;

case 4:
cout << "You chose 4 - Almost there! " << endl;
break;

case 5:
cout << "You chose 5 - You are there!! " << endl;
break;

default:
cout << "Error :: enter a number between 1 and 5" << endl;
break;
    }

    return 0;
}
