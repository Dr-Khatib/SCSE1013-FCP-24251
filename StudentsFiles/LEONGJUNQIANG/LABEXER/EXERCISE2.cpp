#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num1, num2;
    double sum, difference, product, quotient;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    if(num1 >= num2){
        difference = num1 - num2;
        quotient = num1 / num2;
    }
    else{
        difference = num2 - num1;
        quotient = num2 / num1;
    }

    product = num1 * num2;

    cout << "Sum: " << setprecision(2) << fixed << sum << endl;
    cout << "Difference: " << setprecision(2) << fixed << difference << endl;
    cout << "Product: " << setprecision(2) << fixed << product << endl;
    cout << "Quotient: " << setprecision(2) << fixed << quotient << endl;

    





    return 0;
}