#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1,num2,sum,diff,product,quo;
    cout <<"Enter two numbers : ";
    cin >> num1>> num2;
    sum = num1 + num2;
    if (num1>num2){
        diff = num1 - num2;
        quo = num1/num2;
    }else {
        diff = num2 - num1;
        quo = num2/num1;
    }
    product = num1*num2;
    cout << "Sum: " << setprecision(2)<< fixed << sum << endl;
    cout << "Difference: " << setprecision(2)<< fixed << diff << endl;
    cout << "Product: " << setprecision(2)<< fixed << product << endl;
    cout << "Quotient: " << setprecision(2)<< fixed << quo << endl;
    
    
    return 0;
}