#include <iostream>
#include <iomanip>
using namespace std; 

int main() 
{
   float num1, num2;
   cout << "This system perform arithmetic operations. \n";
  
  // 1st number
   cout << "Enter first number: \n ";
   cin >> num1;
   
  // 2nd number
   cout << "Enter second number: \n";
   cin >> num2;
  
  // arithmetic function
  cout << "Sum: " << fixed << setprecision(2) << num1 + num2 << endl; 
  cout << "Difference: " << fixed << setprecision(2) << num1 - num2 << endl;
  cout << "Product :" << fixed << setprecision(2) << num1 * num2 << endl;
  cout << "Quotient: " << fixed << setprecision(2) << num1 / num2 << endl;
  
   return 0;
}