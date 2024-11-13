#include <iostream>

using namespace std;

// Function that takes two integers and displays their sum

int displaySum(int x, int y );

int main() {


    int x = 5, y = 10 ;

    int sum = displaySum(x, y); // Call the function with two numbers
    cout << "the sum of x anf y is "<< sum <<endl;
    system("pause");
    return 0;

}

// Function definition

int displaySum( int x,  int y){

    int sum ;
    sum = x+ y ;
    return sum;

}