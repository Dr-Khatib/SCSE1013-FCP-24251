
/*Exercise 2: Library Function Usage
Complete the program by entering a number and observing the use of the library function:
*/



#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double num, powered;
    cout << "Enter a number to powered: ";
    cin >> num;

    powered = pow(num,num);
    cout << "The power of " <<powered<<endl;

    return 0;
}

