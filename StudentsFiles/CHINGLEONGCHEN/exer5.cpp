#include <iostream>
using namespace std ;



int main() {


    int number,n=1 ;

while (n==1){

    cout << "Enter a number (1-5):";
    cin>> number;


    switch (number){

    case 1: 
    cout <<" Far away"<<endl;
    break ; 

    case 2 : 
    cout << "Keep moving "<<endl;
    break ;

    case 3 :
    cout << "Getting closer"<<endl;
    break;

    case 4: 
    cout << "Almost there "<< endl;
    break ;

    case 5 : 
    cout<< "You have made it !" << endl;
    break;

    default : 
    cout << "Please enter a number between 1 to 5 ."<<endl;

    }

    cout << "Enter 1 to continue or 0 to end :"<<endl;
    cin >> n ;

}


    
    cout << "Thanks for playing ";
    

    system("pause");

    return 0;
}

