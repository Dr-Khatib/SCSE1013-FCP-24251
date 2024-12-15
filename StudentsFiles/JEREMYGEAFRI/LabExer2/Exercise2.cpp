#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered = 2.0;
    cout << "Enter a number to powered: " << endl;
    cin >> num;
    int squared = pow(num , powered);
    cout << "The power of " << squared << endl;

    return 0;
}
