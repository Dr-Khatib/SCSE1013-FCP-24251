#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length,double width);
void displayData(double length,double width,double area);


int main() {
double length = getLength();
double width = getWidth();
double area = getArea(length, width);
displayData(length, width, area);
    
    return 0;
}

double getLength() 
{
    double length;
    cout << "Enter the length: ";
    cin >> length; 
    return length; 
}

double getWidth() {
    double width;
    cout << "Enter the width: ";
    cin >> width; 
    return width; 
}

double getArea(double length, double width) {
    return length * width; 
}

void displayData(double length, double width, double area) {
    cout << "lengt " << length ;
    cout << "width " << width ;
    cout << "Area: " << area ;
}

