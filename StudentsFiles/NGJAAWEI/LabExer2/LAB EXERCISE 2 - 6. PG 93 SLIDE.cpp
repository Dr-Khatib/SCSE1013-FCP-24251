#include <iostream>
using namespace std;

double getLength ();
double getWidth ();
double getArea (double, double);
void displayData (double, double, double);

int main () 
{
	double length = getLength(), 
	       width  = getWidth(),
	       area   = getArea(length, width);
	
	displayData(length, width, area);
	
	return 0;
}

double getLength ()
{
	double length; 
	
	cout << "Rectangle's Length : ";
	cin >> length;
	
	return length;
}

double getWidth ()
{
	double width;
	
	cout << "Rectangle's Width  : ";
	cin >> width;
	
	return width;
}

double getArea (double length, double width)
{
	return length * width;
}

void displayData (double length, double width, double area)
{
	cout << endl 
	     << "Area of the rectangle = (Rectangle's Length) x (Rectangle's Width)" << endl
	     << "                      = " << length << " x " << width << endl
	     << "                      = " << area;
}
