#include <iostream>
#include <cmath>
using namespace std;

void greet();

int main(){

    double result = sqrt(16.0);     // sqrt(16.0) is the library function which is square root function with a arguement which is 16
    cout << "Square root of 16 is: " << result << endl;

    greet();    
    


    return 0;
}


void greet(){           // this is a user defined function with a void data type which is no return value , inside the parameter is empty, so that is not passing arguement in this void function
    cout << "Hello from greet function! " << endl;  //user defined function body
}