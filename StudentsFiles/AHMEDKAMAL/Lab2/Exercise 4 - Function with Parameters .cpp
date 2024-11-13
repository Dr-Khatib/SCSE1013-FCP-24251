#include <iostream>
using namespace std;
void displaySum(int a, int b);
int main() {
int x = 5, y = 10;
displaySum(x, y);
return 0;
}
void displaySum(int a, int b) {
int sum = a + b;
cout << "The sum of " << a << " and " << b << " is " << sum << endl;
}
