#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double a, b, sum, difference, product, quotient;

    cout << "Enter two numbers: "; 
    cin  >> a; 
    cin  >> b;

    sum     = a + b;
    product = a * b;
  
    if (a > b) 
    {
        difference = a - b;
        quotient   = (a / b);
    }

    else      
    {
        difference = b - a;
        quotient   = (b / a);
    }

    cout << "Sum: "        << fixed << setprecision(2) << sum        << endl;
    cout << "Difference: "                             << difference << endl;
    cout << "Product: "                                << product    << endl;
    cout << "Quotient: "                               << quotient   << endl;

    return 0;
}