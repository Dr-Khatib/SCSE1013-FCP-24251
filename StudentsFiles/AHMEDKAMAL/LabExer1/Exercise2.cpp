#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

  
    cout << "Sum: " << (int)((num1 + num2) * 100 + 0.5) / 100.0 << endl;
    cout << "Difference: " << (int)((num1 - num2) * 100 + 0.5) / 100.0 << endl;
    cout << "Product: " << (int)((num1 * num2) * 100 + 0.5) / 100.0 << endl;
    cout << "Quotient: " << (num2 != 0 ? (int)((num1 / num2) * 100 + 0.5) / 100.0 : 0) << endl;

    return 0;
}
