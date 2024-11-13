#include <iostream>
using namespace std;
int main(){
    int number;

    cout << "Enter a number (1-5): ";
    cin >> number;

    switch (number){
        case 1:
            cout << "You chose 1 - It is the start!";
            break;
        case 2:
            cout << "You chose 2 - I guess it is better than 1.";
            break;
        case 3:
            cout << "You chose 3 - Halfway, two more to go.";
            break;
        case 4:
            cout << "You chose 4 - One more!";
            break;
        case 5:
            cout << "You chose 5 - It is the end!";
            break;
        default :
            cout << "Error, please enter a number between 1-5";
            break;
    }
  return 0;
}
