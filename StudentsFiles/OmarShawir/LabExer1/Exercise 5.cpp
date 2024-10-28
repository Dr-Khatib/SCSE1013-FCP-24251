#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number (1-5): ";
	cin>> num ;
	switch(num){
		 case 1:
            cout <<"You chose 1 - correct"<< endl;
            break;
        case 2:
            cout <<"You chose 2 - correct"<< endl;
            break;
        case 3:
            cout <<"You chose 3 - correct"<< endl;
            break;
        case 4:
            cout <<"You chose 4 - Almost there!"<< endl;
            break;
        case 5:
            cout <<"You chose 5 - correct "<< endl;
            break;
        default:
            cout <<"Error! wrong choise"<< endl;
            break;
    }

    return 0;
	
}
