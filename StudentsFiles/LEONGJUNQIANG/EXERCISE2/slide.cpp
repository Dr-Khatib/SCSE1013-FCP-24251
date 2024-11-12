#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double,double);
void displayData(double, double, double);


int main(){
    
    double length,width,area;

    length = getLength();
    width = getLength();
    area = getArea(length,width);

    displayData(length,width,area);




    return 0;
}

double getLength(){
    double x;
    cout << "Please Enter Your Rectangle's length: ";
    cin >> x;
    return x;
}

double getWidth(){
    double x;
    cout << "Please Enter Your Rectangle's Width: ";
    cin >> x;
    return x;
}

double getArea(double x,double y){

    return x*y;
}

void displayData(double x, double y, double z){
    cout << "Your rectangle's Length is: " << x << endl;
    cout << "Your rectangle's width is: " << y << endl;
    cout << "Your rectangle's area is: " << z << endl;
}