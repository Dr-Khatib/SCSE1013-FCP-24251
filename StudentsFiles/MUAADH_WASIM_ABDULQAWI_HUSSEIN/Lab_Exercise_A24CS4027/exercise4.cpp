#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;


    if (x >= y && x >= z) {
        cout << x << " is the largest (or tied for largest)." << endl;
    } else {
        cout << x << " is not the largest." << endl;
    }

    return 0;
}