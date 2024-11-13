#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered;
    cout << "Enter a number to powered: ";
    cin >> num;

    powered = pow(num,2);
    cout << "The power of num is " << powered << endl;

    return 0;
}
