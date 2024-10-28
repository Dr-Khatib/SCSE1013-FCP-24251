#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;

    
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;

   
    if (num1 > num2 && num1 > num3) {
        cout << "The first number " << num1 << " is the largest" << endl;
    } else if (num1 == num2 && num1 > num3) {
        cout << "There is a tie between the first number " << num1 << "and the second number " << num2 << endl;
    } else if (num1 == num3 && num1 > num2) {
        cout << "There is a tie between the first number " << num1 << "and the third number " << num3 <<  endl;
    } else if (num1 == num2 && num1 == num3) {
        cout << "All three numbers are equal" << endl;
    } else {
        cout << "The first number " << num1 << " is not the largest." << endl;
    }

    return 0;
	
	}
