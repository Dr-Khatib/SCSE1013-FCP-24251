#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2;

    // Ask the user for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Set the decimal precision to 2
    cout << fixed << setprecision(2);

    // Calculate and display the sum
    double sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Calculate and display the difference
    double difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    // Calculate and display the product
    double product = num1 * num2;
    cout << "Product: " << product << endl;

    // Calculate and display the quotient
    double quotient = num1 / num2; 
    cout << "Quotient: " << quotient << endl;
    

    return 0;
}
