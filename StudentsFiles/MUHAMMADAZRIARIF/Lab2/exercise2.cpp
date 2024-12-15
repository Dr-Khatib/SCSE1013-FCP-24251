#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num, squared;
    // num input
    cout << "Enter a number to powered: ";
    cin >> num;
    // squared will be equal to number input by the user to the power of 2
    squared = pow(num,2);
    // will print num to the power of 2
    cout << num << " to the power of 2 is " << squared <<endl;

    return 0;
}