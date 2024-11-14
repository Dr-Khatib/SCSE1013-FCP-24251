
#include <iostream>

using namespace std;

// Function that triples the given integer and returns the result
int triple (int value );

int main() {

    int value = 4;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    system("pause");
    return 0;
}

// Function definition

int triple (int value ){

    int result ;
    result = value *value *value ;
    return result ;

}
