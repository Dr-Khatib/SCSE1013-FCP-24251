/*
    Calculate rectangle's area
    Code by: Ahmad Fikri Nabil bin Zamri
    Date: 12/11/2024
*/

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double area, double length, double width);

int main() {

    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);

    displayData(area, length, width);

    return 0;
}

double getLength() {

    double length = 0.0;

    cout << "\nEnter length of rectangle: ";
    cin >> length;

    return length;
}

double getWidth() {

    double width = 0.0;

    cout << "Enter width of rectangle: ";
    cin >> width;

    return width;
}

double getArea(double length, double width) {

    double area = length * width;
    return area;

}

void displayData(double area, double length, double width) {

    cout << "\nLength of rectangle: " << length;
    cout << "\nWidth of rectangle: " << width;
    cout << "\nArea of rectangle: " << area << "\n" << endl;
}