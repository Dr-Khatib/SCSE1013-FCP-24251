#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double num, powered,expo;
    cout << "Enter a number to powered: ";
    cin >> num;

    int squared = pow(num,2);
    cout << "The power of " << num << "  is " << squared <<endl;

    system("pause");

    return 0;
}


/*

Number to powered : 2 
exponent for powering number : 2 
Ouput : 4 


*/