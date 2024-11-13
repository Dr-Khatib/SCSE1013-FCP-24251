#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double width, double length);
void displayData(double area, double width, double length);

int main(){
    double length = getLength();
    double width = getWidth();
    double area = getArea(width, length);
    displayData(area, width, length);

    return 0;
}

double getLength(){
    double length = 0.0;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    return length;
}

double getWidth(){
    double width = 0.0;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    return width;
}

double getArea(double width, double length){
    double area = width * length;

    return area;
}

void displayData(double area, double width, double length){
    cout << "Length of rectangle: " << length << endl;
    cout << "Width of rectangle: " << width << endl;
    cout << "Area of rectangle: " << area << endl;
    return;
}
