#include <iostream>

using namespace std;

double getLength();
double getWidth();
double getArea(double num1, double num2);
void displayData();

int main()
{
    double const length = getLength();
    double const width = getWidth();

    double const area = getArea(length, width);
    displayData(area);
    return 0;
}

double getLength()
{
    double num;

    cout << "Enter length of the rectangle: ";
    cin >> num;
    return num;
}

double getWidth()
{
    double num;

    cout << "Enter width of the rectangle: ";
    cin >> num;
    return num;
}

double getArea(double const num1, double const num2)
{
    return num1 * num2;
}

void displayData(double const num)
{
    cout << "The area of the rectangle is " << num;
}