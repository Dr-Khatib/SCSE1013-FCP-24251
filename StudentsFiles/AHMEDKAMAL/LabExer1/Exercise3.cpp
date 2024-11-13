#include <iostream> 
using namespace std;

int main()
{
    int number;

cout << "Enter an integer: "; 
cin >> number; 

if (number == 0)
cout << number << " is zero." << endl;  
        
else if (number > 0)
cout << number << " is positive." << endl;
        
else
cout << number << " is negative." << endl;

return 0;
}
