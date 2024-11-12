#include <iostream>

using namespace std;

int triple(int value);

int main() {
    int value;
    cout << "Enter a value: " << endl;
    cin >> value;
    int result = triple(value); // Call the function and store the result
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}

int triple(int value)
{
    return 3 * value;
}
