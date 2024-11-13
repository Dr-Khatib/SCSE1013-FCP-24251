#include <iostream>
using namespace std;
int triple(int n);
int main() {
int value = 4;
int result = triple(value);
cout << "Triple of " << value << " is: " << result << endl;
return 0;
}
int triple(int n) {
return n * 3;
}
