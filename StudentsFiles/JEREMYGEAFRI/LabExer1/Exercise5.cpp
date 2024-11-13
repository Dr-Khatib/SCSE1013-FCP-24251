#include <iostream>
using namespace std;
int main()
   {
    cout << "Enter a number(1-5): " << endl ;
    int num;
    cin >> num;
    switch (num){
    case 1:
    cout << "You chose 1 - Good start !" <<endl;
    break;
    case 2:
    cout << "You chose 2 - Next step ahead !" <<endl;
    break;
    case 3:
    cout << "You chose 3 - Halfway there !" <<endl;
    break;
    case 4: 
    cout << "You chose 4 - Almost there !" <<endl;
    break;
    case 5:
    cout << "You chose 5 - There you go !" <<endl;
    break;
    default:
    cout << "Error: The number is out of range, try again." <<endl;
    }
    return 0;
   }