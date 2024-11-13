#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    float num1, num2;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    cout<<fixed<<setprecision(2);
    cout<<"Sum: " <<sum <<endl;
    cout<<"Difference: " <<difference <<endl;
    cout<<"Product: " <<product <<endl;
    cout<<"Quotient: " <<quotient <<endl;

    return 0;
}