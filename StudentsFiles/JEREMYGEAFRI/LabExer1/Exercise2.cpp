#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"Enter two number:"<< endl;
    float num1, num2;
    cin >> num1 >> num2 ;
    float sum, diff, prod, quot =0;
    sum= num1 + num2;
    diff=num1-num2;
    prod=num1*num2;
    quot=num1/num2;
    cout<< "Sum: "<< fixed << setprecision(2) << sum << endl;
    cout<< "Difference: " << fixed << setprecision(2) << diff << endl;
    cout<< "Product: " << fixed << setprecision(2) << prod<< endl;
    cout<< "Quotient: "  << fixed << setprecision(2) << quot << endl;
    return 0;
}
