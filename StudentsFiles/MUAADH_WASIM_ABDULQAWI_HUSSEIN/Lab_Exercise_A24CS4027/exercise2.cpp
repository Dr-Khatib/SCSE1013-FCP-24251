#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, y;
	
    cout << "Enter two numbers: ";
    cin >> x >> y;    
    cout << fixed << setprecision(2);
	
	
    double sum = x + y;
    cout << "Sum: " << sum << endl;
	
    
    double difference = x - y;
    cout << "Difference: " << difference << endl;

    
    double product = x * y;
    cout << "Product: " << product << endl;
	
    
    if (y != 0) {
    double quotient = x / y; 
    cout << "Quotient: " << quotient << endl;
    } else { 
        cout << "Quotient: Undefined" << endl;
    }
    
    return 0;
}