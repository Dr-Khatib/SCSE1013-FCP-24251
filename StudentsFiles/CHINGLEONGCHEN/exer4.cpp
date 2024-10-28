#include <iostream>
using namespace std ;



int main() {

 int num1, num2, num3;

    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

   
    int highest = num1;

    
    if (num2 > highest) {
        highest = num2;
    }

    if (num3 > highest) {
        highest = num3;
    }

    cout << "The highest number is: " << highest << endl;

    system("pause");

    return 0;
}

