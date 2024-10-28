 #include <iostream>
 using namespace std;
 
 int main()
 {
 	int number;
 	
 	cout << "Enter an integer: ";
 	cin >> number;
 	
 	if (number >=1)
 		cout << "" << number << " is postive.";
 		
 	else if (number == 0)
 		cout << "" << number << " is zero.";
 		
 	else if (number < 0)
 		cout << "" << number << " is negative.";
 	
 	return 0;
 }