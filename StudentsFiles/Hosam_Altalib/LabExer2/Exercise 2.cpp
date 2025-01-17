#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num, squared;
    cout << "Enter a number to powered: ";
    cin >> num ;

    squared = pow(num,2);
    cout << "The square of  " <<num<<" is "<<squared<<endl;

    return 0;
}

