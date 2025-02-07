#include <iostream>

using namespace std;

int displaySum(int, int); 

int main() {
    int x = 5, y = 10;
    displaySum(x, y); 
    return 0;
}
 
 
int displaySum(int a, int b){
	cout<<"The sum of "<< a <<" and "<< b <<" is "<<a+b;
} 

