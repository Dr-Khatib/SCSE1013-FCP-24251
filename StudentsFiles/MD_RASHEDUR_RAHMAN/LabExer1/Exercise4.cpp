#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    float num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is the largest (or tied for largest).";
    }
    getch();
    return 0;
}

