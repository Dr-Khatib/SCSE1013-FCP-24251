#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number (1-5): ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "You chose 1 - Too Far!";
        break;

    case 2:
        cout << "You chose 2 - Bruh";
        break;

    case 3:
        cout << "You chose 3 - Close Enough!";
        break;

    case 4:
        cout << "You chose 4 - Almost there!";
        break;

    case 5:
        cout << "You chose 5 - You Made It!";
        break;

    default:
        cout << "Out of range!";
    }
}