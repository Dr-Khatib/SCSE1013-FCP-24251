#include <iostream>
#include <iomanip>
#include <cmath>
#define N "\n"
using namespace std;

int main ()
{
	//Declaration
	double P, r, n, M; // P = Loan amount, r = Annual interest rate, n = Loan period in years, M = Monthly payment
	
	//Prompt and get information 
	cout << "Loan amount (USD): " ;
	cin >> P;
	cout << "Annual interest rate (decimal): ";
	cin >> r;
	cout << "Loan period (year): ";
	cin >> n;
	cout << "\n\n\n";
	
	//Calculation
	M = (P*r/12)/(1-pow((1+r/12),(-12*n)));
	
	//Initializayion
	int count = 0, month = 0;
	
	//Pre-test
	while (count < (12*n))
	{
		//Update of counter
		count +=1;
		month +=1;
		
		//Declaration
		double I; // I = User's monthly income
		
		//Prompt and get information
		cout << "**********************************************************\n\n";
		cout << "Your monthly income in month " << month << " : ";
		cin >> I;
		cout << "The monthly payment is " << fixed << setprecision(2) << M << N;
		
		//Selection part
		if (M>(0.3*I))
			cout << "Warning:Payment may not be affordable.\n";
		 
		 //End if
		 cout << "Do you want to continue or not?[Y/N] : ";
		 char decision;
		 cin >> decision;
		 
		 //Selection part
		 if ((decision=='Y')||(decision=='y'));
		 else
		{
			cout << "Loan Default: Extend Loan Period or Adjust Payment Plan.\n\n";
			cout << "**********************************************************";
			return 0;
		}
		cout << N << N;
	} // End repetition
	
	//Prompt
	cout << "Loan Repayment Successful!\n\n";
	cout << "**********************************************************";
	return 0;
}