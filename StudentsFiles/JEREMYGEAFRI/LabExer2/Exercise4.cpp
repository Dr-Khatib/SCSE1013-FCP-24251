#include <iostream>
using namespace std;

int displaySum(int x, int y);

int main() 
{
    int x = 5, y = 10;
    cout << "The sum is " << displaySum(x, y) << endl;
    return 0;
}

int displaySum(int x, int y)
{
    return x + y;
}
