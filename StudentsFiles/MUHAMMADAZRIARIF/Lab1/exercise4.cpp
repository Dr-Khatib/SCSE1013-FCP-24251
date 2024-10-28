#include <iostream>
using namespace std;
int main(){
    //declare
    int number1, number2, number3;
    bool largest, tied;
    
    //getting input
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    cout << number1;
    //equality check
    if (number1 >= number2 && number1 >= number3){
        cout << " is the largest";
        if (number1 == number2 || number1 == number3)
        {
            cout << " (or tied for largest)";
        }
    }
    else{
        cout << " is not the largest";
    }
    return 0;
}
