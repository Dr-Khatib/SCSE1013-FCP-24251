#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}
double getArea(double length, double width) {
    return length * width;
}
void displayData(double length, double width, double area) {
    cout << "Rectangle's Length: " << length << endl;
    cout << "Rectangle's Width: " << width << endl;
    cout << "Rectangle's Area: " << area << endl;
}
