    /*Write a C++ program to calculate a rectangle’s area. The program consists of the following functions:
    getLength – enter the length, and then returns that value as a double.
    getWidth – enter the width, and then returns that value as a double.
    getArea – takes length and width as arguments and return the rectangle’s area. 
    displayData – accepts the rectangle’s length, width and area as arguments, and display them in an appropriate message on the screen.
    main – This function consists of calls to the above functions.*/
    #include <iostream>
    using namespace std;

    // Function to get the length of the rectangle
    double getLength() {
        double length;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        return length;
    }

    // Function to get the width of the rectangle
    double getWidth() {
        double width;
        cout << "Enter the rectangle's width: ";
        cin >> width;
        return width;
    }

    // Function to calculate the area of the rectangle
    double getArea(double a, double b) {
        return a * b;
    }

    // Function to display the rectangle's dimensions and area
    void displayData(double c, double d, double e) {
        cout << "\nRectangle has:\n";
        cout << "Length: " << c << endl;
        cout << "Width: " << d << endl;
        cout << "Area: " << e;
    }

    int main(){
        double length = getLength();
        double width = getWidth();

        // Calculate the rectangle's area
        double area = getArea(length,width);
        // Display the rectangle's dimensions and area
        displayData(length, width, area);
    }

