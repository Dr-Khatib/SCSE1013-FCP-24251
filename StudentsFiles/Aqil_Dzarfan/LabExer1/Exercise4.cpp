#include <iostream>
using namespace std;

int main()
{

    int num[3];
    cout << "Enter three numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i];
    }

    int max_value = num[0];

    for (int i = 0; i < 3; i++)
    {

        if (num[i] > max_value)
        {
            max_value = num[i];
        }
    }

    if ((num[0] == num[1]) || (num[0] == num[2]) || (num[1] == num[2]))
        cout << max_value << " is the largest (or tied for largest).";

    else
        cout << max_value << " is the largest.";

    return 0;
}