#include <iostream>
#include <cmath> 


using namespace std;

void greet(); 

int main() {
    double result = sqrt(16.0); 
    cout << "Square root of 16 is: " << result << endl;

    greet(); 
    return 0;
}

void greet() {
    cout << "Hello from greet function!" << endl;
}

