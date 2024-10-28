#include <iostream>
using namespace std;

int main ()
{
    double a, b, c;

    cout << "Enter three numbers: ";
    cin  >> a;
    cin  >> b;
    cin  >> c;

    if (a >= b && a >= c)
    {
        if (a == b || a == c) 
        {
            cout << a << " is the largest (or tied for largest).";
            return 0;
        }

        cout << a << " is the largest.";
    }
        

    else
    {
    	cout << a << " is not the largest."
	}

    return 0;
}
