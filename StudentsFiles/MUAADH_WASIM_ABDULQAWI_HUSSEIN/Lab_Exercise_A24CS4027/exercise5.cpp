#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter a number (1-5): ";
    cin >> n;

    
    if (n == 1) {
        cout << "You chose 1 - Just started!" << endl;
    } else if (n == 2) {
        cout << "You chose 2 - Making progress!" << endl;
    } else if (n == 3) {
        cout << "You chose 3 - Halfway there!" << endl;
    } else if (n == 4) {
        cout << "You chose 4 - Almost done!" << endl;
    } else if (n == 5) {
        cout << "You chose 5 - You finished!" << endl;
    } else {
	
	cout << "Error: Enter a number between 1 and 5." << endl;
    }

    return 0;
}