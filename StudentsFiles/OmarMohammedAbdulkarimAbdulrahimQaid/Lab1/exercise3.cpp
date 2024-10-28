#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user to input an integer
    cout << "Enter an integer: ";
    cin >> n;

    // Check if the number is positive, negative, or zero
    if (n > 0) {
        cout << n << " is positive." << endl;
    } else if (n < 0) {
        cout << n << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
