#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a number (1-5): ";
    cin >> number;

    if (number >= 1 && number <= 5) {
        switch (number) {
            case 1:
                cout << "You chose 1 - the beginning." << endl;
                break;
            case 2:
                cout << "You chose 2 - Taking a step forward." << endl;
                break;
            case 3:
                cout << "You chose 3 - Half reached." << endl;
                break;
            case 4:
                cout << "You chose 4 - Almost there." << endl;
                break;
            case 5:
                cout << "You chose 5 - You got it." << endl;
                break;
        }
    } else {
        cout << "Error: Number is out of range." << endl;
    }

    return 0;
}
