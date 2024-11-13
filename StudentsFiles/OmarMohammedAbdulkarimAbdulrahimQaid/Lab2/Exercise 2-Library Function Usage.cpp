#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered;
    cout << "Enter a number to powered: ";
    cin >> num;

    powered = pow(num, 3);
    cout << num << " to the power of 3 is " << powered <<endl;

    return 0;
}
