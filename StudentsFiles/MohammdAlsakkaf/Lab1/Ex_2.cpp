#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = round(num1 * num2 * 100) / 100;
    double quotient = num1 / num2;

    cout << fixed << setprecision(2);
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}