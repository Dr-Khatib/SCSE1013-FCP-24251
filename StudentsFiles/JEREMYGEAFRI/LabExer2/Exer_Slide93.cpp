#include <iostream>
using namespace std;

int displayArea(int getLength, int getWidth);

int main()
{
    int getLength, getWidth;
    cout << "Enter length: " << endl;
    cin >> getLength;
    cout << "Enter Width: " << endl;
    cin >> getWidth;
    cout << "The Area is " << displayArea(getLength, getWidth) << endl;
    return 0;
}

int displayArea (int getLength, int getWidth)
{
    return getLength * getWidth ;
}
