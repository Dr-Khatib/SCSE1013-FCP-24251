#include <bits/stdc++.h>

using namespace std;

int main()
{
	float a,b,Sum,Difference,Product,Quotient;

	cout<<"Enter two numbers:";
	cin>>a>>b;
		Sum=a+b;
	if(a>b)
	{
		Difference=a-b;
	}
	else{
		Difference=b-a;
	}
	
	Product=a*b;
	Quotient=a/b;
	
	cout << "Sum: "<<fixed<< setprecision(2)<<Sum<<endl;
	cout << "Difference: "<<fixed<< setprecision(2)<<Difference<<endl;
	cout << "Product: "<<fixed<< setprecision(2)<<Product<<endl;
	cout << "Quotient:  "<<fixed<< setprecision(2)<<Quotient<<endl;
}
