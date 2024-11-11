#include <iostream>

using namespace std;

int triple(int);

int triple(int num) {
    return num * 3;
}

int main() {
    int value = 4;
    int result = triple(value); 
    cout << "Triple of " << value << " is: " << result << endl;
    return 0;
}
