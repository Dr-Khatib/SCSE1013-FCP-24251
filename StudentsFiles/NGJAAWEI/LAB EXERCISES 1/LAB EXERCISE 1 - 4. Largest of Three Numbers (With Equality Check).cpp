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
        

    else if (b >= a && b >= c)
    {
        if (b == a || b == c) 
        {
            cout << b << " is the largest (or tied for largest).";
            return 0;
        }

        cout << b << " is the largest.";
    }

    else if (c >= a && c >= b)
    {
        if (c == a || c == b) 
        {
            cout << c << " is the largest (or tied for largest).";
            return 0;
        }

        cout << c << " is the largest.";
    }

    return 0;
}