#include <iostream>
using namespace std ;



int main() {

    int input  ;
    cout <<"Enter an integer :";
    cin >> input ; 
    cout <<"    "<<endl;

    if (input<0){

    cout <<input << "is negative .";
        
    }
    
    else if (input>0){

    cout << input <<"is positive .";

    }

    else if (input ==0){

        cout << input << " is zero.";
    }


    system("pause");

    return 0;
}

