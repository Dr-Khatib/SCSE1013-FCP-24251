#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, powered, squared;
    cout << "Enter a number to powered: ";
    cin >> num;
    
    powered = 2;

    squared = pow(num, powered);
    cout << "The power of" << " " << num << " is " << squared << "." <<endl;

    return 0;
}
