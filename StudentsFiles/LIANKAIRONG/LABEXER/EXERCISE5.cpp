#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number (1-5): ";
    cin >> number;



    switch (number){
        case 1 :
                    cout << "Your choose " << number << " - Almost there!";
                    break;

        case 2:
                    cout << "Your choose " << number << " - Almost there!";
                    break;
        case 3:
                    cout << "Your choose " << number << " - Almost there!";
                    break;
        case 4: 
                    cout << "Your choose " << number << " - Almost there!";
                    break;
        case 5: 
                    cout << "Your choose " << number << " - Almost there!";
                    break;
        default :
                    cout << "INVALID NUMBER!";


    }


    return 0;
}