#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << fixed << setprecision(2);

    double sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    double difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    double product = num1 * num2;
    cout << "Product: " << product << endl;

    if (num2 != 0) {
    double quotient = num1 / num2; 
    cout << "Quotient: " << quotient << endl;
    } else { 
        cout << "Quotient: Undefined" << endl;
    }
    

    return 0;
}
