// C++ program that asks the user to input three numbers and determines if the first number is the largest or if there is a tie for the largest number.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: "<<endl;
    cin >> a >> b >> c;

    // Check if 'a' is the largest or if there's a tie
    if (a >= b && a >= c) {
        if (a == b && a == c) cout << " All are all equal." << endl;
        else if (a == b || a == c) cout << a << " is tied for the largest." << endl;
        else cout << a << " is the largest." << endl;
     }

    // Check if 'b' is the largest or if there's a tie
    else if (b >= a && b >= c) {
        if (b == c) cout << b << " is tied for the largest." << endl;
        else cout << b << " is the largest." << endl;
     }

    // If 'a' and 'b' are not the largest, then `c` must be the largest
    else cout << c << " is the largest." << endl;

    return 0;
}

