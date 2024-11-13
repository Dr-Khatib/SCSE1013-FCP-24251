#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, squared;
    cout << "Enter a number to powered: ";
    cin >> num;

    squared = pow(num,2);
    cout << num << " power of 2 is " << squared << endl;

    return 0;
}
