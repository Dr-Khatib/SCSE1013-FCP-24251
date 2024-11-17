//Complete the program by entering a number and observing the use of the library function:

#include <iostream>
#include <cmath>
using namespace std;

int main() { //main() is library function
    double num, squared;
    cout << "Enter a number to be squared: ";
    cin >> num;

    squared = pow(num , 2); //pow() is library function
    cout << "The square of " <<num<< " is: "<<squared<< endl;
    return 0;
}

