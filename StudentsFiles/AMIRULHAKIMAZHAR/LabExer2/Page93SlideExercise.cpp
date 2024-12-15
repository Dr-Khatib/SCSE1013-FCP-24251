#include <iostream>

using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main() {
    cout << "This program calculate the area of rectangle.\n";
    double length = getLength(length);
    double width = getWidth(width);
    double area = getArea(length, width);
    displayData(length, width, area);

}

double getLength(double length){
    cout << "Please enter the length: ";
    cin >> length;
    return length;
}

 double getWidth(double width){
    cout << "Please enter the width: ";
    cin >> width;
    return width;
 }

double getArea(double length, double width){
    return length * width;
}

void displayData(double length, double width, double area){
    cout << "The length is: " << length << "\n";
    cout << "The width is: " << width << "\n";
    cout << "The area is: " << area << "\n";
}