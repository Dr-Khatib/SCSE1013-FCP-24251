#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float number_1, number_2, sum, diff, pro, quo;
	
	cout << "Enter two numbers:";
	cin >> number_1 >> number_2;
	
	sum = number_1 + number_2;
	diff = number_1 - number_2;
	pro = number_1 * number_2;
	quo = number_1 / number_2;
	
	cout << std::fixed << std::setprecision(2);
	cout << "Sum: " << sum;
	cout << "\nDifferent: " << diff;
	cout << "\nProduct: " << pro;
	cout << "\nQuotient: " << quo;
	
	return 0;
}