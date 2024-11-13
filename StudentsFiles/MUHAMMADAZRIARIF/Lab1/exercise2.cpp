#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double number1, number2, sum, diff, prod, quot = 0;

    //getting input
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    //add two number
    sum = number1 + number2;

    //difference between two number
    diff = number1 - number2;

    //product of the two number
    prod = number1 * number2;

    //quotient of number 1 divided by number 2
    quot = number1 / number2;

    //formatting to 2 decimal point
    cout << fixed << setprecision(2);
    
    //output of all arithmetic operations
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quot << endl;
    return 0;
}
