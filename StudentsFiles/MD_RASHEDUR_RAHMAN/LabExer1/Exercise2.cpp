#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    float num1,num2;
    cout<<"Enter number 1 = ";
    cin>>num1;
    cout<<"Enter number 2 = ";
    cin>>num2;
    cout <<fixed <<setprecision(2) << "Sum: " << num1 + num2 << endl;
    cout <<fixed <<setprecision(2) << "Difference: " << num1 - num2 << endl;
    cout <<fixed <<setprecision(2) << "Product: " << num1 * num2 << endl;
    cout <<fixed<<setprecision(2)<< "Quotient: " << num1 / num2 << endl;
    getch();
    return 0;
}

