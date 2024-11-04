#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer: " << endl;
    int num ;
    cin >> num ;
    if (num > 0)
    cout << num << " is a positive integer" << endl ;
    else if(num<0)
    cout << num << " is a negative integer" << endl ;
    else ;
    cout << num << " is zero" << endl ;
    return 0 ;
}
