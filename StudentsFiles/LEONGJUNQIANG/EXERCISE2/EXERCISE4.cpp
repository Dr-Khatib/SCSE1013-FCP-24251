#include <iostream>
using namespace std;

void displaysum(int, int);

int main(){

    int x = 5, y = 10;
    displaysum(x,y);   



    return 0;
}


void displaysum(int x, int y){
    cout << "The sum of two number is " << (x+y) << endl;
}