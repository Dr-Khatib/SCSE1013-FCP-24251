#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << setprecision(2) << "Sum: " << num1 + num2;
    cout << setprecision(2) << "\nDifference: " << num1 - num2;
    cout << setprecision(2) << "\nProduct: " << num1 * num2;
    cout << setprecision(2) << "\nQuotient: " << num1 / num2;

    return 0;
}