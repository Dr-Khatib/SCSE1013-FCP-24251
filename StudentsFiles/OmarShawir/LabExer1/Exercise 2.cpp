#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float num1, num2;
	cout<<"Enter two numbers: ";
	cin>> num1 >> num2;
	cout << fixed << setprecision(2);
	cout<<"Sum: "<< num1 + num2 <<endl;
	cout<<"Diffrence: "<< num1 - num2 <<endl;
	cout<<"Product: "<< num1 * num2 <<endl;
	cout<<"Qoutient: "<< num1 / num2<<endl;
	return 0;
	
}
