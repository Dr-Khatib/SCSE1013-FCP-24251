#include <iostream>
using namespace std;

int triple(int);

int main(){

    int value = 4;
    int result = triple(value);
    cout << "The triple of " << value << " is: " << result << endl;


    return 0;
}

int triple(int x){

    return x*3;
}