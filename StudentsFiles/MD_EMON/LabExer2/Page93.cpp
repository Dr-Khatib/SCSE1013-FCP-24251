#include <iostream>
using namespace std;

// Function declarations
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}

// Function definitions

// Function to get the length from the user
double getLength() {
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// Function to get the width from the user
double getWidth() {
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double getArea(double length, double width) {
    return length * width;
}

// Function to display the length, width, and area
void displayData(double length, double width, double area) {
    cout << "Rectangle's length: " << length << endl;
    cout << "Rectangle's width: " << width << endl;
    cout << "Rectangle's area: " << area << endl;
}
