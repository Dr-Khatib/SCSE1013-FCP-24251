/*Exercise 1: Identify the Function Type
Identify which part is the library function and which is the user-defined function:
*/

//......
//...........
//................


#include <iostream>

using namespace std;

// Function that triples the given integer and returns the result
int triple(int num);

int main() {
    int value = 4;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

// Function definition
int triple(int num) {
    return num * 3;
}


//................
//...........
//......

//Output: This displays "Triple of 4 is: 12"