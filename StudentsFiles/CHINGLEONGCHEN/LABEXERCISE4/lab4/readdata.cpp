#include <iostream>
#include "header.h"

void readdata(int &count, int year[],string country[], int gold[], int sliver[], int bronze[]) {
    // Prompt user for input

    cout << " Enter the year of the match :";
    cin >> year[count];

    cout << "Please enter the country name: ";
    cin >> country[count];

    cout << "Enter the quantity of the Gold won: ";
    cin >> gold[count];

    cout << "Enter the quantity of the Silver won: ";
    cin >> sliver[count];

    cout << "Enter the quantity of the Bronze won: ";
    cin >> bronze[count];

    // Increment count to keep track of the number of entries
    count++;
}
