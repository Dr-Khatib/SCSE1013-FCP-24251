/*Write a C++ program to calculate a rectangle’s area. The program consists of the following functions:
getLength – This function should ask the user to enter the rectangle’s length, 
			and then returns that value as a double.
getWidth – This function should ask the user to enter the rectangle’s width, 
			and then returns that value as a double.
getArea – This function should accept the rectangle’s length and width 
			as arguments and return the rectangle’s area.
displayData – This function should accept the rectangle’s length, 
			width and area as arguments, and display them in an appropriate message on the screen.*/
			
#include <iostream>

using namespace std;

double getLength ();
double getWidth();
double getArea (double, double);
void displayData (double, double, double);

int main()
{
	
	double length, width, area;
	
	length = getLength();
    width = getWidth();
    area = getArea(length, width);
    
    displayData(length,width,area);  // Display results of the rectangle's area
	
	return 0;
}	

double getLength ()
{
	double recLength;
	
	cout << "Enter the rectangle's length: ";
	cin >> recLength;
	
	return recLength;
	
}	

double getWidth ()
{
	double recWidth;
	
	cout << "Enter the rectangle's width: ";
	cin >> recWidth;
	
	return recWidth;
}

double getArea (double length,double width)
{
	
	return length*width;
}

void displayData (double length, double width, double area)
{
	cout << "\nThe rectangle's length is "<< length << endl;
	cout << "The rectangle's width is "<< width << endl;
	cout << "The rectangle's area is "<< area << endl;
	
}