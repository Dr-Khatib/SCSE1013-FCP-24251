#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer: " << endl;
    int num=0 ;
    cin >> num ;
    if (num > 0)
    cout << num << " is a positive integer" << endl ;
    else if(num<0)
    cout << num << " is a negative integer" << endl ;
    else (num=0);
    cout << num << " is zero" << endl ;
    return 0 ;
}