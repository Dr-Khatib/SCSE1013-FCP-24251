//Write a C++ program to calculate a rectangle’s area. 

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main()
{
	double length, width, area;
	
	length = getLength();
	width = getWidth();
	area = getArea(length, width);
	displayData(length, width, area);
	
	return 0;
}

double getLength()
{
	double l;
	
	cout << "Enter the length of a rectangle (cm):  ";
	cin >> l;
	
	return l;
}

double getWidth()
{
	double w;
	
	cout << "Enter the width of a rectangle (cm) : ";
	cin >> w;
	
	return w;
}

double getArea(double l, double w)
{
	return l*w;
}

void displayData(double l, double w, double a)
{
	cout << "The length of the rectangle (cm): " << l << endl;
	cout << "The width of the rectangle (cm) : " << w << endl;
	cout << "The area of the rectangle (cm)  : " << a << endl;
}